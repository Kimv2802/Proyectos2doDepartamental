#include <iostream>
#include <stdlib.h>
#include "Cola.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int valor,opcion;
	
	Cola nuevaCola;
	
	do{
		cout<<".:Menu de Cola de dato base por puntero:."<<endl;
		cout<<"1.- Agregar Elemento"<<endl;
		cout<<"2.- Quitar Elemento "<<endl;
		cout<<"3.- Mostrar Cola"<<endl;
		cout<<"4.- Vaciar completamente la cola"<<endl;
		cout<<"5.- Verificar si esta vacia"<<endl;
		cout<<"6.- Mostrar tamano de la Cola"<<endl;
		cout<<"7.- Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1:{
<<<<<<< HEAD:ColaPunterosDB/main.cpp
				nuevaCola.pedirDatos(valor);
				nuevaCola.agregarCola(valor);
=======
				nuevaCola.pedirDatos(n);
				nuevaCola.agregarCola(n);
>>>>>>> proyectosColasNTDD:ColaPunterosNTDD/main.cpp
				system("pause");
				break;
			}
			
			case 2:{
				nuevaCola.quitarCola();
				system("pause");
				break;
			}
			case 3:{
				nuevaCola.mostrarCola();
				system("pause");
				break;
			}
			case 4:{
				nuevaCola.vaciarCola();
				system("pause");
				break;
			}
			case 5:{
				if(nuevaCola.colaVacia()){
					cout<<"----La cola esta vacia----"<<endl;
				}else{
					cout<<"Existen elementos en la cola"<<endl;
				}
				system("pause");
				break;
			}
			case 6:{
				nuevaCola.mostrarTam();
				system("pause");
				break;
			}
			case 7:{
				cout<<"......Saliendo del programa......"<<endl;
				system("pause");
				break;
			}
			default:{
				cout<<"Opcion no valida, seleccione una del menu"<<endl;
				system("pause");
				break;
			}
			
		}
		
		system("cls");
		
	}while(opcion!=7);
	
	
	system("pause");
	return 0;
}
