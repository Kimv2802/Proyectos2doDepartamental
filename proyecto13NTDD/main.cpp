#include <iostream>
#include <stdlib.h>
#include <string>
#include "ListaPersonas.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	ListaPersonas nuevaLista;
	
	nuevaLista.crearLista();
	nuevaLista.llenarLista();
	nuevaLista.mostrarLista();
	nuevaLista.eliminarLista(); //liberar memoria
	
	
	system("pause");
	return 0;
}
