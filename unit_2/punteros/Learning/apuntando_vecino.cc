#include <iostream>
using namespace std;

int main() { // 0  1  2  3  4 <- indices
    int c[5] = {1, 2, 8, 4, 5}; // Declaramos un arreglo de 5 elementos
    int *p3; // Creamos un puntero
    p3 = &c[1]; // p3 apunta a la direccion de c[1]
    std::cout << "p3 deberia ser la direccion de c[1] =" << p3 << std::endl; // Imprimimos el valor de c[1] (2)
    std::cout << "*p3 = " << *p3 << std::endl; // Imprimimos el valor de c[1] (2)
    // p3++; // p3 apunta a la direccion de c[2]
    p3 = p3 + 3; // p3 apunta a la direccion de c[3]
    std::cout << "*p3 = " << *p3 << endl;

    return 0;
}