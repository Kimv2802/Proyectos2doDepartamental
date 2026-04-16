#include "Cola.h"
#include<iostream>
using namespace std;

Cola::Cola(){
	frente = NULL;
	fin = NULL;
}

Cola::~Cola(){
	
	while(frente!=NULL){
		Nodo *aux = frente;
		frente = frente->siguiente;
		delete aux;
	}
	
	fin = NULL;
	
}


void Cola::pedirDatos(int &n){
	cout<<"Digite un numero para guardarlo en la cola: ";
	cin>>n;
}

void Cola::agregarCola(int &n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	
	if(frente==NULL){
		frente=nuevo_nodo;
	}else{
		fin->siguiente = nuevo_nodo;
	}
	
	fin = nuevo_nodo;
	
	cout<<"\tEl numero: "<<n<<" ha sido guardado exitosamente"<<endl;
}

void Cola::quitarCola(){
	Nodo *aux = frente;
	
	if(frente!=NULL){
		cout<<"Elemento "<<frente->dato<<" elimnado de la cola"<<endl;
		frente=frente->siguiente;
		delete aux;
	}else{
		cout<<"----No hay elementos para eliminar en la cola----"<<endl;
	}
}

void Cola::mostrarCola(){
	if(frente==NULL){
		cout<<"----La cola esta vacia----"<<endl;
	}else{
		Nodo *aux = frente;
		cout<<"frente-> ";
		while(aux!=NULL){
			if(aux->siguiente!=NULL){
				cout<<aux->dato<<" -> ";
			}else{
				cout<<aux->dato<<" <- fin"<<endl;
			}
			aux=aux->siguiente;
		}
	}
	
}

void Cola::vaciarCola(){
	
	if(frente==NULL){
		cout<<"----La cola esta vacia----"<<endl;
	}else{
	
		while(frente!=NULL){
			Nodo *aux = frente;
			frente = frente->siguiente;
			delete aux;
		}
	
		if(frente==NULL){
			frente = NULL;
			fin = NULL;
		}
	
		cout<<"Cola vaciada con exito"<<endl;
		
	}
}

bool Cola::colaVacia(){
	return (frente==NULL)? true:false;
}

void Cola::mostrarTam(){
	if(frente==NULL){
		cout<<"----La cola esta vacia----"<<endl;
	}else{
		int contarNodos = 0;
		Nodo *aux = frente;
		while(aux!=NULL){
			contarNodos++;
			aux=aux->siguiente;
		}
		cout<<"El tamaño de la cola es de: "<<contarNodos<<" elementos"<<endl;
	}
}
