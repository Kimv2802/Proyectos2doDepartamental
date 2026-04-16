#include <iostream>
#include <stdlib.h>
#include "Cola.h" // Tu nueva clase

using namespace std;

int main() {
    int valor, opcion;
    Cola nuevaCola; // Instancia de tu clase
    
    do {
        cout << "\n.:Menu de Cola de Dato base por libreria:." << endl;
        cout << "1.- Agregar Elemento" << endl;
        cout << "2.- Quitar Elemento" << endl;
        cout << "3.- Mostrar Cola" << endl;
        cout << "4.- Vaciar completamente" << endl;
        cout << "5.- Verificar si esta vacia" << endl;
        cout << "6.- Mostrar tamano" << endl;
        cout << "7.- Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                cout << "Digite el numero a agregar: ";
                cin >> valor;
                nuevaCola.agregarCola(valor);
                break;
            case 2:
                nuevaCola.quitarCola();
                break;
            case 3:
                nuevaCola.mostrarCola();
                break;
            case 4:
                nuevaCola.vaciarCola();
                break;
            case 5:
                if(nuevaCola.colaVacia()) cout << "La cola esta vacia." << endl;
                else cout << "La cola tiene datos." << endl;
                break;
            case 6:
                nuevaCola.mostrarTam();
                break;
            case 7:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }
        system("pause");
        system("cls");
        
    } while(opcion != 7);
    
    return 0;
}
