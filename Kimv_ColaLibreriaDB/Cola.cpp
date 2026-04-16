#include "Cola.h"
#include <iostream>

void Cola::agregarCola(int valor){
	datos.push(valor);
    cout << "Elemento " << valor << " agregado con exito." << endl;
}

void Cola::quitarCola(){
	if (!datos.empty()) {
        cout << "Se elimino el valor: " << datos.front() << endl;
        datos.pop();
    } else {
        cout << "La cola esta vacia." << endl;
    }
}

void Cola::mostrarCola(){
	if (datos.empty()) {
        cout << "La cola esta vacia." << endl;
        return;
    }
        
    queue<int> copia = datos; 
    cout << "Contenido de la cola: ";
    
    cout<<"frente -> ";
    
    while (!copia.empty()) {
    	cout <<copia.front()<<" -> ";
        copia.pop();
    }
    
    cout<<" fin";
    
    cout << endl;
}

void Cola::vaciarCola(){
	while (!datos.empty()) {
        datos.pop();
    }
    cout << "Cola vaciada." << endl;
	
}

bool Cola::colaVacia(){
	return datos.empty();
}

void Cola::mostrarTam(){
	cout << "Tamano actual: " << datos.size() << endl;
}
