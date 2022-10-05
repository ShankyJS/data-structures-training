/*
    Alumno: Jhan Carlos Silva Martinez
    Carnet: SM100218
*/

#include <iostream>

using namespace std;

void ejemplo2() {
    int a = 5, b = 10;
    int *p1, *p2;
    p1 = &a; // p1 guarda la direccion de a
    p2 = &b; // p2 guarda la direccion de b
    *p1 = 10; // modificando el valor que esta en la direccion de a por 10
    p1 = p2; // p1 guarda la direccion de b
    *p1 = 20; // modificando el valor que esta en la direccion de b por 20
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

void ejemplo3() {
    int a[5] = {1, 2, 3, 4, 5};
    int *p1;
    p1 = &a[1]; // obtiene la direccion de este elemento
    cout << "*p1 = " << *p1 << endl;
    p1++; // apunta al siguiente elemento del arreglo
    cout << "*p1 = " << *p1 << endl;

    // Operadores de preincremento y postincremento
    cout << *(p1++) << endl; // imprime *p1 = 3, porque primero se lee el valor de p1 y despues de esta linea se hace que la variable apunte a 4 (postincremento)
    cout << *(++p1) << endl; // imprime *p1 = 5, porque primero se hace que la variable apunte a 5 (preincremento) y despues se lee el valor de p1

    p1 -= 3; // apunta a 2
    cout << "*p1 = " << *p1 << endl;
}

void ejemplo4() {
    int a[5] = {1, 2, 3, 4, 5};
    int *p1;
    p1 = &a[1]; // obtiene la direccion de este elemento
    int dave; // variable normal
    dave = *(p1+2); // dave = a[3] = 4 (p1+2) es la direccion de a[3]
    cout << "*p1 = " << *p1 << endl; // imprime 2
    cout << "dave = " << dave << endl; // imprime 4

    int ruth = *(p1++); // ruth = a[1] = 2 (p1++) es la direccion de a[2] (postincremento) y se lee el valor de a[1]
    int noah = *(p1-2); // noah es p1 que era a[2] y se le resta 2, entonces noah = a[0] = 1
    cout << "ruth = " << ruth << endl;
    cout << "*p1 = " << *p1 << endl;
}

void ejemplo5() {
    int ramon[5] = {12, 19, 23, 25, 30};
    cout << ramon << endl; // imprime la direccion de 12.

    cout << ramon[2] << endl; // imprime 23
    cout << *(ramon + 2) << endl; // imprime 23

    // Imprimir el valor 30 usando notacion de punteros
    cout << (ramon + 4) << endl; // imprime la direccion de 30
    cout << *(ramon + 4) << endl; // imprime el valor en la direccion de memoria de 30 (30)
}

void ejemplo6() {
    char generoFemenino = 'F';
    char generoMasculino = 'M';
    const char *pGenero = &generoFemenino; // pGenero va a apuntar a generoFemenino toda la vida, no se puede cambiar.
    cout << pGenero << endl;
    cout << *pGenero << endl;
    pGenero = &generoMasculino; // esto no es correcto
    cout << pGenero << endl;
    cout << *pGenero << endl;
}

void ejemplo7() {
    int ramon[5] = {12, 19, 23, 25, 30};
    cout << ramon << endl; // imprime la direccion de 12.
    // ramon++; // trata de modificar ramon que es un puntero constante
    // cout << ramon << endl; // imprime la direccion de 12.
}

void ejemplo8() {
    int **ramon; // guarda la direccion de memoria de una variable de tipo puntero a entero.
    int *paul; // guarda la direccion de memoria de un entero
    int melissa = 5; // variable normal de tipo entero con un valor 5.
    paul = &melissa; //  guarda la direccion de melissa en la variable de tipo puntero paul
    ramon = &paul; // guarda la direccion de la variable de tipo puntero paul en el puntero ramon
    cout << "ramon = " << ramon << endl; // imprime la direccion de memoria en donde esta el puntero paul
    cout << "&paul = " << &paul << endl; // imprime la direccion de memoria de la variable paul
    cout << "*ramon = " << *ramon << endl; // imprime la direccion de memoria de la variable melissa
    cout << "&melissa = " << &melissa << endl; // imprime la direccion de memoria de la variable melissa
    cout << "**ramon = " << **ramon << endl; // imprime el valor de la variable melissa
}

int main() {
    ejemplo8();
    return 0;
}