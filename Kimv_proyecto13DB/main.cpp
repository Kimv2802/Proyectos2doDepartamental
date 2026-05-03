#include <iostream>
#include <limits>
#include "ListaPersonas.h"
using namespace std;

int main() {
	
	ListaPersonas listaNueva;
	int opcion;

	do{
		cout<<".:Menu de Proyecto 13 con Dato Base"<<endl;
		cout<<"1. Pedir cantidad"<<endl;
		cout<<"2. Crear lista"<<endl;
		cout<<"3. Llenar lista"<<endl;
		cout<<"4. Mostrar lista"<<endl;
		cout<<"5. Eliminar lista"<<endl;
		cout<<"6. Salir"<<endl;
		cout<<"Seleccione una opcion: ";
		
		cin>>opcion;

		if(cin.fail()){
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout<<"Entrada invalida\n";
			opcion = 0;
			continue;
		}

		switch(opcion){
			case 1:
				listaNueva.pedirDatos();
				break;
			case 2:
				listaNueva.crearLista();
				break;
			case 3:
				listaNueva.llenarLista();
				break;
			case 4:
				listaNueva.imprimirLista();
				break;
			case 5:
				listaNueva.deshacerLista();
				break;
			case 6:
				cout<<"Saliendo...\n";
				break;
			default:
				cout<<"Opcion no valida\n";
		}

	}while(opcion!=6);

	return 0;
}
