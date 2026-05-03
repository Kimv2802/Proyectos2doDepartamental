#include "ListaPersonas.h"
#include <iostream>
#include <limits>
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
	deshacerLista();
}

void ListaPersonas::pedirDatos(){
	cout<<"Digite la cantidad de personas: ";
	cin>>cantPersonas;

	if(cin.fail() || cantPersonas <= 0){
		cin.clear();
		cin.ignore(1000, '\n');
		cout<<"Cantidad invalida\n";
		cantPersonas = 0;
	}
}

void ListaPersonas::crearLista(){

	if(cantPersonas <= 0){
		cout<<"Primero debe ingresar una cantidad valida\n";
		return;
	}

	if(nombre != NULL){
		cout<<"La lista ya existe\n";
		return;
	}

	nombre = new string[cantPersonas];
	ap = new string[cantPersonas];
	am = new string[cantPersonas];
	genero = new string[cantPersonas];
	edad = new int[cantPersonas];

	cout<<"Lista creada con exito\n";
}

void ListaPersonas::llenarLista(){

	if(nombre == NULL){
		cout<<"Primero debe crear la lista\n";
		return;
	}

	cin.ignore();

	for(int i=0;i<cantPersonas;i++){
		cout<<"\nPersona "<<i+1<<endl;

		cout<<"Nombre: ";
		getline(cin, *(nombre + i));

		cout<<"Apellido paterno: ";
		getline(cin, *(ap + i));

		cout<<"Apellido materno: ";
		getline(cin, *(am + i));

		cout<<"Genero: ";
		getline(cin, *(genero + i));

		cout<<"Edad: ";
		cin>>*(edad + i);

		while(cin.fail() || *(edad + i) <= 0){
			cin.clear();
			cin.ignore(1000, '\n');
			cout<<"Edad invalida: ";
			cin>>*(edad + i);
		}

		cin.ignore();
	}
}

void ListaPersonas::imprimirLista(){

	if(nombre == NULL){
		cout<<"No hay lista creada\n";
		return;
	}

	for(int i=0;i<cantPersonas;i++){
		cout<<"\nPersona "<<i+1<<endl;
		cout<<"Nombre: "<<*(nombre + i)<<" "<<*(ap + i)<<" "<<*(am + i)<<endl;
		cout<<"Genero: "<<*(genero + i)<<endl;
		cout<<"Edad: "<<*(edad + i)<<endl;
	}
}

void ListaPersonas::deshacerLista(){

	if(nombre == NULL){
		cout<<"No hay lista para eliminar\n";
		return;
	}

	delete[] nombre;
	delete[] ap;
	delete[] am;
	delete[] genero;
	delete[] edad;

	nombre = NULL;
	ap = NULL;
	am = NULL;
	genero = NULL;
	edad = NULL;

	cantPersonas = 0;

	cout<<"Lista eliminada\n";
}
