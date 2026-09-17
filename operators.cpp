#include <iostream>

using namespace std;

int main()
{
    // operadores aritméticos
    int a = 10;
    int b = 5;
    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicación: " << a * b << endl;
    cout << "División: " << a / b << endl;
    cout << "Módulo: " << a % b << endl;

    // operadores de comparación
    cout << "Igual a: " << (a == b) << endl;
    cout << "Diferente de: " << (a != b) << endl;
    cout << "Mayor que: " << (a > b) << endl;
    cout << "Menor que: " << (a < b) << endl;
    cout << "Mayor o igual que: " << (a >= b) << endl;
    cout << "Menor o igual que: " << (a <= b) << endl;

    // operadores de asignación
    a = 20;
    b += 5; // equivalente a b = b + 5
    cout << "Asignación simple: " << a << endl;
    cout << "Asignación con suma: " << b << endl;

    // operadores lógicos
    bool c = true;
    bool d = false;
    cout << "AND lógico: " << (c && d) << endl;
    cout << "OR lógico: " << (c || d) << endl;
    cout << "NOT lógico: " << (!c) << endl;

    // otros operadores sizeof
    cout << "Tamaño de a: " << sizeof(a) << " bytes" << endl;
    cout << "Tamaño de b: " << sizeof(b) << " bytes" << endl;
    cout << "Tamaño de c: " << sizeof(c) << " bytes" << endl;
    cout << "Tamaño de d: " << sizeof(d) << " bytes" << endl;

    // ejemplo

    int e = 2;
    int f = 3;
    bool g = e > f;
    cout << "e > f: " << g << endl;
    bool h = e < f;
    cout << "e < f: " << h << endl;

    e += 1;
    cout << "e después de e += 1: " << e << endl;
    cout << "e: " << e << endl;
}
