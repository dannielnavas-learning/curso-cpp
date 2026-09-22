#include <iostream>

using namespace std;

int main()
{
    bool isTrue = true;
    bool isFalse = false;

    cout << "isTrue: " << isTrue << endl;
    cout << "isFalse: " << isFalse << endl;

    bool resultado = true && false;
    cout << "resultado: " << resultado << endl;

    bool resultadoOr = true || false;
    cout << "resultadoOr: " << resultadoOr << endl;

    bool resultadoNot = !true;
    cout << "resultadoNot: " << resultadoNot << endl;

    int edad = 0;

    cout << "edad: " << edad << endl;
    cin >> edad;
    cout << "edad actualizada: " << edad << endl;
    // if (edad >= 18)
    // {
    //     if (edad <= 40)
    //     {
    //         cout << "Eres un adulto joven." << endl;
    //     }
    //     else
    //     {
    //         cout << "Eres mayor de edad." << endl;
    //     }
    // }
    // else
    // {
    //     cout << "Eres menor de edad." << endl;
    // }

    if (edad <= 18)
    {
        cout << "Eres menor de edad." << endl;
    }
    else if (edad <= 40)
    {
        cout << "Eres un adulto joven." << endl;
    }
    else
    {
        cout << "Eres mayor de edad." << endl;
    }

    return 0;
}
