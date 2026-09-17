#include <iostream>

using namespace std;

// todo los programas corren desde el main punto de entrada
int main()
{
    // bool valorLogico = true;
    // int numeroEntero = 100;
    // float numeroDecimal = 3.14;
    // double numeroDecimalDoble = 3.14159;
    // char caracter = 'a';

    int age_user = 0;

    age_user = 36;

    const char initial = 'D';
    // initial = 'L'; // Esto causará un error porque initial es constante
    cout << "La inicial del usuario es: " << initial << endl; // endl hace un cambio de linea

    int list_of_age[] = {36, 34, 8}; // forma de declarar listas
    cout << list_of_age[0] << ", " << list_of_age[1] << ", " << list_of_age[2] << endl;
    // codigo que se ejecuta al iniciar el programa
    cout << "La edad del usuario es: " << age_user << endl;
}

// Tipo de datos en C++

// bool valor logico true 4 bytes
// int numero entero 100 4 bytes
// float numero decimal 3.14 4 bytes
// double numero decimal de doble precision 3.14159 8 bytes
// char caracter ASCII 'a' 1 byte
