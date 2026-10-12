
#include <iostream>
using namespace std;

int main() {

    int opcion;
    float saldo = 1000, cantidad;

    do {

        cout << "1. Consultar saldo" << endl;
        cout << "2. Depositar dinero" << endl;
        cout << "3. Retirar dinero" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {

            case 1:
                cout << "Su saldo actual es: $" << saldo << endl;
                break;

            case 2:
                cout << "Ingrese la cantidad a depositar: ";
                cin >> cantidad;

                if (cantidad > 0) {
                    saldo = saldo + cantidad;

                    cout << "Dinero depositado correctamente." << endl;
                    cout << "Nuevo saldo: $" << saldo << endl;
                }
                else {
                    cout << "Cantidad no valida." << endl;
                }
                break;

            case 3:
                cout << "Ingrese la cantidad a retirar: ";
                cin >> cantidad;

                if (cantidad <= 0) {
                    cout << "Cantidad no valida." << endl;
                }
                else if (cantidad <= saldo) {
                    saldo = saldo - cantidad;

                    cout << "Retiro realizado correctamente." << endl;
                    cout << "Nuevo saldo: $" << saldo << endl;
                }
                else {
                    cout << "Fondos insuficientes." << endl;
                }
                break;

            case 4:
                cout << "Gracias por utilizar el cajero." << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
        }

    } while (opcion != 4);

    return 0;
}
