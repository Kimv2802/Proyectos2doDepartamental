#include "Cola.h"
#include<iostream>
using namespace std;

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
	
	cout<<"\tEl numero: "<<n<<" ha sido guardado exitosamente";
}
