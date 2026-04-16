#include <iostream>
#include <stdlib.h>
#include <string.h>;
#include "ListaPersonas.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	ListaPersonas listaNueva;
	
	listaNueva.pedirDatos();
	listaNueva.crearLista();
	listaNueva.llenarLista();
	listaNueva.imprimirLista();
	
	system("pause");
	return 0;
}
