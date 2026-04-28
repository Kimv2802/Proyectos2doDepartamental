#include <iostream>
#include "ARREGLO.h"
using namespace std;

int main() {
    Pila p;
    int op, val;

    do {
        cout << "MENU PILA \n";
        cout << "1. Push (agregar)\n";
        cout << "2. Pop (quitar)\n";
        cout << "3. Mostrar pila\n";
        cout << "4. Vaciar pila\n";
        cout << "5. Verificar si esta vacia\n";
        cout << "6. Mostrar tamanio\n";
        cout << "0. Salir\n";
        cout << "Opcion: ";
        cin >> op;

        switch(op) {
            case 1:
                cout << "Valor: ";
                cin >> val;
                p.push(val);
                break;

            case 2:
                p.pop();
                break;

            case 3:
                p.mostrar();
                break;

            case 4:
                p.vaciar();
                break;

            case 5:
                if (p.estaVacia())
                    cout << "La pila esta vacia\n";
                else
                    cout << "La pila NO esta vacia\n";
                break;

            case 6:
                cout << "Tamanio: " << p.tamano() << endl;
                break;

            case 0:
                cout << "Saliendo...\n";
                break;

            default:
                cout << "Opcion invalida\n";
        }

    } while(op != 0);

    return 0;
}
