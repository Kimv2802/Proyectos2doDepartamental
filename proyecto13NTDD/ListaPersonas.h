#ifndef LISTAPERSONAS_H
#define LISTAPERSONAS_H
#include <string>
using namespace std;

struct Persona{
	string nombre;
	string ap;
	string am;
	string genero;
	int edad;
};

class ListaPersonas
{
	public:
		void crearLista();
		void llenarLista();
		void mostrarLista();
		void eliminarLista();
	protected:
		int cantPersonas = 0;
		Persona *ptrLista = NULL;
		
};

#endif
