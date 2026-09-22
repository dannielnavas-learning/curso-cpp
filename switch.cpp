#include <iostream>

using namespace std;

int main()
{
    int option;
    cout << "Ingrese una opción (1-3): ";
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Opción 1 seleccionada." << endl;
        break;
    case 2:
        cout << "Opción 2 seleccionada." << endl;
        break;
    case 3:
        cout << "Opción 3 seleccionada." << endl;
        break;
    default:
        cout << "Opción no válida." << endl;
        break;
    }
    return 0;
}
