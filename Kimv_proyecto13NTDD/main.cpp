#include <iostream>
#include <limits>
#include "ListaPersonas.h"
using namespace std;

int main() {
    
    ListaPersonas nuevaLista;
    int opcion;

    do {
        cout << ".:Menu de proyecto 13 con Nuevo tipo de Dato" << endl;
        cout << "1. Crear lista" << endl;
        cout << "2. Llenar lista" << endl;
        cout << "3. Mostrar lista" << endl;
        cout << "4. Eliminar lista" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        
        cin >> opcion;

        switch(opcion){
            case 1:
                nuevaLista.crearLista();
                break;

            case 2:
                nuevaLista.llenarLista();
                break;

            case 3:
                nuevaLista.mostrarLista();
                break;

            case 4:
                nuevaLista.eliminarLista();
                break;

            case 5:
                cout << "Saliendo del programa...\n";
                break;

            default:
                cout << "Opcion no valida.\n";
        }

    } while(opcion != 5);

    return 0;
}
