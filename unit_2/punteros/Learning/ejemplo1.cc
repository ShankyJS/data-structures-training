#include <iostream>

using namespace std;

int main() {
    int a = 5, b = 10; // Declaramos variables iniciales
    int *p1, *p2; // Creamos dos punteros
    p1 = &a; // p1 apunta a la direccion de a
    p2 = &b; // p2 apunta a la direccion de b
    *p1 = 10; // Modificamos el valor de "a" a 10
    p1 = p2; // p1 apunta a la direccion de b (p2) que es 10 a=10 b=10
    *p1 = 20; // Modificamos el valor de "b" a 20
    cout << "a: " << a << endl; // Imprimimos el valor de a (10)
    cout << "b: " << b << endl; // Imprimimos el valor de b (20)
}