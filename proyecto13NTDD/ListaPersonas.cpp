#include "ListaPersonas.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

void ListaPersonas::crearLista(){
	
	cout<<"Digite la cantidad de personas que desea agregar a la lista: ";
	cin>>cantPersonas;
	
	ptrLista = new Persona[cantPersonas];
	cout<<"\t Lista de personas creada con exito";
}
