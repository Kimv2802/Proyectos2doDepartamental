#include <iostream>
#include <stdlib.h>
#include "Cola.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n,opcion;
	
	Cola nuevaCola;
	
	do{
		cout<<".:Menu de Cola de nuevo tipo de dato por puntero:."<<endl;
		cout<<"1.- Agregar Elemento"<<endl;
		cout<<"2.- Quitar Elemento "<<endl;
		cout<<"3.- Mostrar Cola"<<endl;
		cout<<"4.- Vaciar completamente la cola"<<endl;
		cout<<"5.- Verificar si esta vacia"<<endl;
		cout<<"6.- Mostrar tamaño de la Cola"<<endl;
		cout<<"7.- Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1:{
				nuevaCola.pedirDatos(n);
				nuevaCola.agregarCola(n);
				break;
			}
			
			case 2:{
				nuevaCola.quitarCola();
				break;
			}
			case 3:{
				nuevaCola.mostrarCola();
				break;
			}
			case 4:{
				nuevaCola.vaciarCola();
				break;
			}
			case 5:{
				if(nuevaCola.colaVacia()){
					cout<<"----La cola esta vacia----"<<endl;
				}else{
					cout<<"Existen elementos en la cola"<<endl;
				}
				break;
			}
			case 6:{
				nuevaCola.mostrarTam();
				break;
			}
			case 7:{
				cout<<"......Saliendo del programa......"<<endl;
				break;
			}
			default:{
				cout<<"Opcion no valida, seleccione una del menu"<<endl;
				break;
			}
			
		}
	}while(opcion!=7);
	
	
	system("pause");
	return 0;
}
