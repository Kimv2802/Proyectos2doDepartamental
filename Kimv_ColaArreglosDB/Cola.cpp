#include "Cola.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

Cola::Cola(){
    arreglo = NULL;
    frente = 0;
    fin = -1;
    capacidad = 0;
    creada = false;
}

Cola::~Cola(){
	if(arreglo != NULL){
        delete[] arreglo;
        arreglo = NULL;
    }
}

void Cola::crearArreglo(){
	cout<<"Digite la cantidad de elementos desea agregar a la cola: ";
	cin>>capacidad;
	
	arreglo = new int[capacidad];
	
	cout<<"\tARREGLO PARA ALMACENAR COLA CREADO CON EXITO"<<endl;
	creada = true;
}

void Cola::redimensionarArreglo() {
    int nuevaCapacidad;

    cout << "Actualmente su capacidad es: " << capacidad << endl;
    cout << "Digite cuantos espacios mas desea agregar: ";
    cin >> nuevaCapacidad;

    nuevaCapacidad += capacidad;

    int *aux = new int[nuevaCapacidad];

    for(int j = 0; j <= fin; j++) {
        aux[j] = arreglo[j];
    }

    delete[] arreglo;

    arreglo = aux;
    capacidad = nuevaCapacidad;

    cout << "La cola se redimensiono con exito" << endl;
}

void Cola::agregarElemento(){
    int valor;
    cout << "Ingrese un numero: ";
    cin >> valor;

    fin++;
    arreglo[fin] = valor;
}

void Cola::mostrarCola(){
    cout << "frente -> ";

    for(int j = 0; j <= fin; j++){
        cout << arreglo[j] << " -> ";
    }

    cout << "fin"<<endl;
}

void Cola::eliminarElemento(){
    for(int j = 0; j < fin; j++){
        arreglo[j] = arreglo[j+1];
    }

    fin--;
    cout << "Elemento eliminado"<<endl;
}

void Cola::vaciarCola(){
    fin = -1;
    cout << "Cola vaciada con exito"<<endl;
}

void Cola::mostrarTamano(){
	cout<<"El tamano actual de la cola es: "<<fin+1<<endl;
}

void Cola::mostrarCapacidad(){
	cout<<"La capacidad de la cola es: "<<capacidad<<endl;
}

bool Cola::isFull(){
    return (fin + 1 == capacidad);
}

bool Cola::isEmpty(){
    return (fin == -1);
}


