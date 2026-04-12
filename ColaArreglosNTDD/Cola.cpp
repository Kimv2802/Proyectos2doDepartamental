#include "Cola.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

void Cola::crearArreglo(){
	cout<<"Digite la cantidad de elementos desea agregar a la cola: ";
	cin>>arr.capacidad;
	
	arr.arreglo = new int[arr.capacidad];
	
	cout<<"\tARREGLO PARA ALMACENAR COLA CREADO CON EXITO"<<endl;
	creada = true;
}

void Cola::redimensionarArreglo(){
	Numeros aux;
	
	aux.arreglo = new int[arr.capacidad];
	for(int j=0;j<arr.fin+1;j++){
		*(aux.arreglo + j) = *(arr.arreglo + j);
	}
	
	aux.fin = arr.fin;
	aux.frente = arr.frente;
	aux.capacidad = arr.capacidad;
	
	int nuevaCapacidad;
	
	cout<<"Actualmente su capacidad es: "<<arr.capacidad<<endl;
	cout<<"Digite cuantos elemento mas desea agregar: ";
	cin>>nuevaCapacidad;
	
	aux.capacidad += nuevaCapacidad; 
	
	delete[] arr.arreglo;
	
	arr.arreglo = new int[aux.capacidad];
	arr.fin = aux.fin;
	arr.capacidad = aux.capacidad;
	
	for(int j=0;j<aux.fin+1;j++){
		*(arr.arreglo + j) = *(aux.arreglo + j);
	}

	
}

void Cola::agregarElemento(){
	cout<<"Ingrese un numero: ";
	cin>>*(arr.arreglo + i);
	i++;
	arr.fin++;
	//cout<<i;
	//cout<<arr.fin;
}

void Cola::mostrarCola(){
	cout<<"frente-> ";
	for(int j=0;j < arr.fin +1 ;j++){
		
		if(j+1 < arr.fin + 1){
			cout<<*(arr.arreglo + j)<<" , ";	
		}else{
			cout<<*(arr.arreglo +j)<<" <-fin"<<endl;
		}
		
	}
	
}

void Cola::eliminarElemento(){
	
	for(int j=0;j<arr.fin+1;j++){
		*(arr.arreglo + j) = *(arr.arreglo + j+1);
	}
	cout<<"Elemento del frente eliminado"<<endl;
	arr.fin--;
}

void Cola::vaciarCola(){
	i = 0;
	arr.fin = -1;
	cout<<"Cola vaciada con exito"<<endl;
}

void Cola::mostrarTamano(){
	cout<<"El tamano actual de la cola es: "<<arr.fin+1<<endl;
}

void Cola::mostrarCapacidad(){
	cout<<"La capacidad de la cola es: "<<arr.capacidad<<endl;
}

bool Cola::isFull(){
	return (arr.capacidad==(arr.fin+1))? true:false;
}

bool Cola::isEmpty(){
	return (arr.frente>arr.fin)? true:false;
}


