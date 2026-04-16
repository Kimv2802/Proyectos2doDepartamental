#include "Cola.h"

void Cola::agregarCola(int n, string m) {
    Elemento nuevo;
    nuevo.id = n;
    nuevo.nota = m;
    datos.push(nuevo); 
    cout << "Elemento [" << n << "] guardado." << endl;
}

void Cola::quitarCola() {
    if (!datos.empty()) {
        Elemento aux = datos.front(); 
        cout << "Eliminando: " << aux.id << " (" << aux.nota << ")" << endl;
        datos.pop();
    } else {
        cout << "Cola vacia." << endl;
    }
}

void Cola::mostrarCola() {
    if (datos.empty()) {
        cout << "Nada que mostrar." << endl;
        return;
    }
    queue<Elemento> copia = datos;
    cout << "Frente -> ";
    while (!copia.empty()) {
        cout << "[" << copia.front().id << "|" << copia.front().nota << "] -> ";
        copia.pop();
    }
    cout << "Fin" << endl;
}

void Cola::vaciarCola() {
    while (!datos.empty()) datos.pop();
    cout << "Cola vaciada." << endl;
}

bool Cola::colaVacia(){
	return datos.empty(); 	
}

void Cola::mostrarTam(){ 
	cout << "Tamano: " << datos.size() << endl; 
}
