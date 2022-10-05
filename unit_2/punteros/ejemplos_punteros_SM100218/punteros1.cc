/*
    Alumno: Jhan Carlos Silva Martinez
    Carnet: SM100218
*/

#include <iostream>

using namespace std;

int main() {
    int paul = 25;
    cout << "Valor de Paul inicial:" << paul << endl;

    // Obtener la direccion de memoria en la que se guardo una variable

    cout << "Direccion en memoria de Paul: " << &paul << endl;

    // Direccion de Paul
    int* direccionPaul = &paul;
    cout << "Direccion en memoria de Paul usando direccionPaul puntero: " << direccionPaul << endl;

    // Obtener el valor en una posicion de memoria
    cout << "Valor almacenado en el puntero de direccionPaul: " << *direccionPaul << endl; // Imprime el valor que esta en la direccion de Paul

    // Modificar el valor de Paul indirectamente con el puntero
    *direccionPaul = 31;
    cout << "Valor de Paul modificado con el puntero indirectamente: " << paul << endl;

    // Segundo puntero a Paul
    int* direccionPaul2;
    direccionPaul2 = direccionPaul;

    cout << "\nMultiples punteros" << endl;
    cout << "direccionPaul = " << direccionPaul << endl;
    cout << "direccionPaul2 = " << direccionPaul2 << endl;
    *direccionPaul2 = 19;
    cout << "Paul despues de modificarlo con direccionPaul2 = " << paul << endl;

    return 0;
}