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
		
		ListaPersonas();
		~ListaPersonas();
		
	protected:
		int cantPersonas = 0;
		
		string *nombre;
		string *ap;
		string *am;
		string *genero;
		int *edad;
		
};

#endif
