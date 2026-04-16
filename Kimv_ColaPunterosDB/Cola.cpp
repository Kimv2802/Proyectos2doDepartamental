#include "Cola.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

Cola::Cola(){
	frente = NULL;
	fin = NULL;
}

Cola::~Cola(){
	while(frente != NULL){
    Nodo *aux = frente;
    frente = frente->siguiente;
    delete aux;
	}
	fin = NULL;
	
}

bool Cola::colaVacia(){
	return (frente==NULL);
}

void Cola::pedirDatos(int &valor){
	cout<<"Digite un numero: ";
	cin>>valor;
}

void Cola::agregarCola(int valor){
	Nodo *nuevo_nodo = new Nodo(valor);
	if(colaVacia()){
		frente = nuevo_nodo;
		fin = nuevo_nodo;
	}else{
		fin->siguiente = nuevo_nodo;
		fin = nuevo_nodo;
	}
	
	cout<<"Elemento "<<fin->dato<<" agregado exitosamente"<<endl;
	
}

void Cola::quitarCola(){
	if(colaVacia()){
		cout<<"La cola esta vacia, no hay nada que eliminar"<<endl;
		return;
	}
	
	Nodo *aux = frente;
	cout<<"El dato "<<aux->dato<<" ha sido eliminado"<<endl;
	
	frente = frente->siguiente;
	delete aux;
	
	if(frente == NULL){
		fin = NULL;
	}
}


void Cola::mostrarCola(){
	if(colaVacia()){
		cout<<"La cola esta vacia, no hay nada que mostrar"<<endl;
		return;
	}
	
	Nodo *aux=frente;
	
	cout<<"frente-> ";
	
	while(aux != NULL){
		if(aux->siguiente!=NULL){
			cout<<aux->dato<<" -> ";
		}else{
			cout<<aux->dato<<" <-fin"<<endl;
		}
		aux = aux->siguiente;
	}
}

void Cola::vaciarCola(){
	if(colaVacia()){
		cout<<"La cola ya esta vacia"<<endl;
		return;
	}
	
	
	while(frente != NULL){
		Nodo *aux=frente;
		frente = frente->siguiente;
		delete aux;
	}
	
	fin = NULL;
	
	cout<<"La cola se ha vaciado con exito"<<endl;
	
}

void Cola::mostrarTam(){
	if(colaVacia()){
		cout<<"La cola esta vacia, no hay nada que contar"<<endl;
		return;
	}
	
	Nodo *aux=frente;
	int tam = 0;
	
	while(aux != NULL){
		aux = aux->siguiente;
		tam++;
	}
	
	cout<<"El tamano de la cola es: "<<tam<<endl;
	
}

