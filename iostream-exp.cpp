#include <iostream>

using namespace std;

int main()
{
    cout << "Hola, mundo!" << endl; // cout  toma cada una de las letras y envialas a la salida de la terminal decomando
    // cin >> ws; // cin toma la entrada de la terminal y la almacena en una variable, ws ignora los espacios en blanco iniciales
    int edad = 0;
    cout << "Ingresa tu edad: " << endl;
    cin >> edad;
    cout << "Tu edad es: " << edad << endl;
    return 0;
}
