#include <iostream>

using namespace std;

int main()
{
    // int limite;
    int lista[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // cout << "Lista: ";
    // cin >> limite;
    int limite = sizeof(lista) / sizeof(lista[0]); // obtener el tamaño del arreglo
    for (int i = 0; i < limite; i++)
    {
        cout << "Iteración: " << i << endl;
        cout << "Valor en lista: " << lista[i] << endl;
        if (lista[i] == 4)
        {
            break;
        }
    }

    return 0;
}
