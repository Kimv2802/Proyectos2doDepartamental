#include <iostream>
#include "Cola.h"

using namespace std;

int main() {
    int opcion, num;
    string texto;
    Cola nuevaCola;

    do {
        cout << "\n.: Menu de Cola de Nuevo tipo de dato por libreria :." << endl;
        cout << "1.- Agregar (Numero y Nota)" << endl;
        cout << "2.- Quitar" << endl;
        cout << "3.- Mostrar Todo" << endl;
        cout << "4.- Vaciar" << endl;
        cout << "5.- Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingrese numero: "; cin >> num;
                cout << "Ingrese una nota/nombre: "; 
                cin.ignore(); // Limpiar el buffer
                getline(cin, texto);
                nuevaCola.agregarCola(num, texto);
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
        }
        system("pause");
        system("cls");
    } while(opcion != 5);

    return 0;
}
