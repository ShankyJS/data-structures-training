#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    cout << "Escribe su nombre: ";
    getline(cin, nombre);
    cout << "Hola, " << nombre;

    return 0;
}
