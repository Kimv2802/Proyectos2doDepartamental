#include "ListaPersonas.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

ListaPersonas::ListaPersonas(){
	cantPersonas = 0;
	ptrLista = NULL;
}

ListaPersonas::~ListaPersonas(){
	if(ptrLista!= NULL){
		delete[] ptrLista;
		ptrLista = NULL;
	}
}

void ListaPersonas::crearLista(){
	
	cout<<"Digite la cantidad de personas que desea agregar a la lista: ";
	cin>>cantPersonas;
	
	ptrLista = new Persona[cantPersonas];
	cout<<"\t Lista de personas creada con exito";
}

void ListaPersonas::llenarLista(){
	cin.ignore();
	for(int i=0;i<cantPersonas;i++){
		cout<<"\nLLENANDO DATOS DE LA PERSONA "<<i+1<<endl;
		cout<<"Nombre: ";
		getline(cin, (*(ptrLista + i)).nombre);
		cout<<"Apellido Paterno: ";
		getline(cin, (*(ptrLista + i)).ap);
		cout<<"Apellido Materno: ";
		getline(cin, (*(ptrLista + i)).am);
		cout<<"Genero: ";
		getline(cin, (*(ptrLista + i)).genero);
		cout<<"Edad: ";
		cin>>(ptrLista + i)->edad;
	}
	
}

void ListaPersonas::mostrarLista(){
	for(int i=0;i<cantPersonas;i++){
		cout<<"\nMOSTRANDO DATOS DE LA PERSONA "<<i+1<<endl;
		cout<<"Nombre Completo: ";
		cout<<(ptrLista + i)->nombre;
		cout<<" "<<(ptrLista + i)->ap;
		cout<<" "<<(ptrLista + i)->am<<endl;
		cout<<"Genero: ";
		cout<<(ptrLista + i)->genero<<endl;
		cout<<"Edad: ";
		cout<<(ptrLista + i)->edad<<endl;
	}	
	
	
}

void ListaPersonas::eliminarLista(){
	
	delete[] ptrLista;
	
	ptrLista = NULL;
	cantPersonas = 0;
	
	cout<<"\nLA LISTA SE HA BORRADO CON EXITO"<<endl;
	
}
