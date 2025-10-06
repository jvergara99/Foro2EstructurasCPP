// Elabore programas que muestre un menú de productos y retorne el precio del 
// producto seleccionado: Programa 2: Utilice switch

#include <iostream>
using namespace std;

int main() {
int opcion;
    do {
        cout << "====Menú====" << endl;
        cout << "1) Tortas" << endl;
        cout << "2) Palomitas" << endl;
        cout << "3) Agua" << endl;
        cout << "4) Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Tortas: $45" << endl;
            break;
        case 2:
            cout << "Palomitas: $10" << endl;
            break;
        case 3:
            cout << "Aguas: $15" << endl;
            break;
        default:
            cout << "Opción inválida, selecciona una correcta" << endl;
            break;
        } 

    } while (opcion != 4);
    return 0;
}