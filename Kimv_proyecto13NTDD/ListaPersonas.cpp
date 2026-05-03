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
	if(ptrLista != NULL){
		cout << "\nYa existe una lista. Eliminela antes de crear una nueva.\n";
		return;
	}

	cout<<"Digite la cantidad de personas que desea agregar a la lista: ";
	cin>>cantPersonas;

	if(cin.fail() || cantPersonas <= 0){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Cantidad invalida.\n";
		cantPersonas = 0;
		return;
	}
	
	ptrLista = new Persona[cantPersonas];
	cout<<"\tLista de personas creada con exito\n";
}

void ListaPersonas::llenarLista(){
	if(ptrLista == NULL){
		cout << "\nPrimero debe crear la lista.\n";
		return;
	}

	cin.ignore();

	for(int i=0;i<cantPersonas;i++){
		cout<<"\nLLENANDO DATOS DE LA PERSONA "<<i+1<<endl;

		cout<<"Nombre: ";
		getline(cin, (ptrLista + i)->nombre);

		cout<<"Apellido Paterno: ";
		getline(cin, (ptrLista + i)->ap);

		cout<<"Apellido Materno: ";
		getline(cin, (ptrLista + i)->am);

		cout<<"Genero: ";
		getline(cin, (ptrLista + i)->genero);

		cout<<"Edad: ";
		cin>>(ptrLista + i)->edad;

		while(cin.fail() || (ptrLista + i)->edad <= 0){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Edad invalida. Intente de nuevo: ";
			cin >> (ptrLista + i)->edad;
		}

		cin.ignore();
	}
}

void ListaPersonas::mostrarLista(){
	if(ptrLista == NULL){
		cout << "\nNo hay lista creada.\n";
		return;
	}

	if(cantPersonas == 0){
		cout << "\nLa lista esta vacia.\n";
		return;
	}

	for(int i=0;i<cantPersonas;i++){
		cout<<"\nMOSTRANDO DATOS DE LA PERSONA "<<i+1<<endl;

		cout<<"Nombre Completo: ";
		cout<<(ptrLista + i)->nombre<<" "
			<<(ptrLista + i)->ap<<" "
			<<(ptrLista + i)->am<<endl;

		cout<<"Genero: "<<(ptrLista + i)->genero<<endl;
		cout<<"Edad: "<<(ptrLista + i)->edad<<endl;
	}
}

void ListaPersonas::eliminarLista(){
	if(ptrLista == NULL){
		cout << "\nNo hay lista para eliminar.\n";
		return;
	}

	delete[] ptrLista;
	ptrLista = NULL;
	cantPersonas = 0;

	cout<<"\nLa lista se ha borrado con exito\n";
}
