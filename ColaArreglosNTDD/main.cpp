#include <iostream>
#include <stdlib.h>
#include "Cola.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int opc = 0;
	
	
	Cola nuevaCola;
	
	do{
		cout<<"\n.: Menu de Cola con Arreglos de nuevo tipo de dato:."<<endl;
		cout<<"1.- Crear cola / Redimensionar"<<endl;
		cout<<"2.- Agregar elemento"<<endl;
		cout<<"3.- Quitar elemento"<<endl;
		cout<<"4.- Mostrar cola"<<endl;
		cout<<"5.- Vaciar cola"<<endl;
		cout<<"6.- Verificar si está vacía"<<endl;
		cout<<"7.- Mostrar tamaño"<<endl;
		cout<<"8.- Mostrar capacidad"<<endl;
		cout<<"9.- Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opc;
		
		
		switch(opc){
			case 1 :{
				if(!nuevaCola.creada){
					nuevaCola.crearArreglo();
				}else{
					cout<<"Reedimencionando arreglo..."<<endl;
					nuevaCola.redimensionarArreglo();
				}
				system("pause");
				break;
			}
			
			case 2:{
				if(!nuevaCola.creada){
					cout<<"Primero debe crear una cola"<<endl;
					system("pause");
				}else if(nuevaCola.isFull()){
					cout<<"La cola esta llena, puedes redimecionarla con la opcion 1"<<endl;
					system("pause");
				}else{
					nuevaCola.agregarElemento();
				}
				break;
			}
			
			case 3:{
				if(!nuevaCola.creada){
					cout<<"Primero debe crear una cola"<<endl;
				}else if(nuevaCola.isEmpty()){
					cout<<"La cola esta vacia, no hay nada que eliminar"<<endl;
				}else{
					nuevaCola.eliminarElemento();
				}
				system("pause");
				break;
				
			}
			
			case 4:{
				if(!nuevaCola.creada){
					cout<<"Primero debes crear una cola"<<endl;
				}else if(nuevaCola.isEmpty()){
					cout<<"La cola esta vacia, no hay nada que mostrar"<<endl;
				}else{
					nuevaCola.mostrarCola();
				}
				
				system("pause");
				break;
			}
			
			case 5:{
				if(!nuevaCola.creada){
					cout<<"Primero debe crear una cola"<<endl;
				}else{
					nuevaCola.vaciarCola();
				}
				system("pause");
				break;
			}
			
			case 6:{
				if(!nuevaCola.creada){
					cout<<"Primero debes crear una cola"<<endl;
				}else{
					if(nuevaCola.isEmpty()){
					cout<<"La cola esta vacia"<<endl;
					}else if(nuevaCola.isFull()){
					cout<<"La cola esta llena"<<endl;
					}else{
					cout<<"Aun hay espacios disponibles en la cola"<<endl;
					}
					
				}
				system("pause");
				
				break;
			}
			
			case 7:{
				if(!nuevaCola.creada){
					cout<<"Primero debe crear una cola"<<endl;
				}else{
					nuevaCola.mostrarTamano();
				}
				
				system("pause");
				break;
			}
			
			case 8:{
				if(!nuevaCola.creada){
					cout<<"Primero debe crear una cola"<<endl;
				}else{
					nuevaCola.mostrarCapacidad();
				}
				system("pause");
				break;
			}
			
			default:{
				cout<<"Opcion no valida,ingrese una opcion del menu"<<endl;
				system("pause");
				break;
			}
	
			
		}
		system("cls");
		
	}while(opc!=9);
	
	system("pause");
	return 0;
}
