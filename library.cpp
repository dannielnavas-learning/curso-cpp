#include <iostream>
#include <string>

using namespace std;

int main()
{
    char text[] = {'H', 'e', 'l', 'l', 'o'}; // no es eficiente ademas no podemos conocer cuantos caracteres tiene el texto

    string text2 = "Hello";          // mas eficiente y podemos conocer la longitud del texto
    string stringToNumber = "123";   // ejemplo de string que representa un número
    string stringToFloat = "123.45"; // ejemplo de string que representa un número con decimales

    cout << text << endl;
    cout << text2.size() << endl;         // muestra la longitud del texto
    cout << stoi(stringToNumber) << endl; // convierte el string a un número entero
    cout << stof(stringToFloat) << endl;  // convierte el string a un número con decimales

    return 0;
}
