#ifndef LISTAPERSONAS_H
#define LISTAPERSONAS_H
#include <iostream>
#include <string.h>
using namespace std;
class ListaPersonas
{
	public:
		void pedirDatos();
		void crearLista();
		void llenarLista();
		void imprimirLista();
		void deshacerLista();
		
	protected:
		int cantPersonas = 0;
		
		string *nombre = NULL;
		string *ap = NULL;
		string *am = NULL;
		string *genero = NULL;
		int *edad = NULL;
		
};

#endif
