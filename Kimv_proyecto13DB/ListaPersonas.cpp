#include "ListaPersonas.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>;
using namespace std;

ListaPersonas::ListaPersonas(){
	cantPersonas = 0;
		
	nombre = NULL;
	ap = NULL;
	am = NULL;
	genero = NULL;
	edad = NULL;
}

ListaPersonas::~ListaPersonas(){
	
	if(nombre!=NULL){
		delete[] nombre;
		nombre = NULL;	
	}
	
	if(ap!=NULL){
		delete[] ap;
		ap = NULL;	
	}
	
	if(am!=NULL){
		delete[] am;
		am = NULL;	
	}
	
	if(genero!=NULL){
		delete[] genero;
		genero = NULL;	
	}
	
	if(edad!=NULL){
		delete[] edad;
		edad = NULL;	
	}
	
}

void ListaPersonas::pedirDatos(){
	cout<<"Digite la cantidad de personas que desee agregar a la lista: ";
	cin>>cantPersonas;
}


void ListaPersonas::crearLista(){
	
	nombre = new string[cantPersonas];
	ap = new string[cantPersonas];
	am = new string[cantPersonas];
	genero = new string[cantPersonas];
	edad = new int[cantPersonas];
	
	cout<<"\tLISTA DE PERSONAS CREADA CON EXITO"<<endl;
}

void ListaPersonas::llenarLista(){
	cout<<"\n.:LLENANDO LOS DATOS DE LA LISTA:."<<endl;
	
	for(int i=0;i<cantPersonas;i++){
		cin.ignore();
		cout<<"Ingrese los datos de la Persona "<<i+1<<endl;
		cout<<"Nombre: ";
		getline(cin, *(nombre + i));
		cout<<"Apellido paterno: ";
		getline(cin, *(ap + i));
		cout<<"Apellido materno: ";
		getline(cin, *(am + i));
		cout<<"Genero: ";
		getline(cin, *(genero + i));
		cout<<"Edad: ";
		cin>> *(edad + i);	
	}
	
}

void ListaPersonas::imprimirLista(){
	cout<<"\n.:IMPRIMIENDO LISTA DE PERSONAS:."<<endl;
	
	for(int i=0;i<cantPersonas;i++){
		cout<<"\n\tPERSONA "<<i+1<<endl;
		cout<<"Nombre completo: "<<*(nombre + i)<<" "<<*(ap + i)<<" "<<*(am + i)<<endl;
		cout<<"Genero: "<<*(genero + i)<<endl;
		cout<<"Edad: "<<*(edad + i)<<endl;
	}
	
	
}


