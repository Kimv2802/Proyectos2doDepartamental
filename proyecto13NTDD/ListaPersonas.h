#ifndef LISTAPERSONAS_H
#define LISTAPERSONAS_H
#include <string>
using namespace std;

struct Persona{
	string Nombre;
	string ap;
	string am;
	string genero;
	int edad;
};

class ListaPersonas
{
	public:
		void crearLista();
	protected:
		int cantPersonas = 0;
		Persona *ptrLista;
		
};

#endif
