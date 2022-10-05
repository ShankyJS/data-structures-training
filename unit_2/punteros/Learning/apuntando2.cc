#include <iostream>
using namespace std;

int main() { // 0  1  2  3  4 <- indices
    int c[5] = {1, 2, 8, 4, 5}; // Declaramos un arreglo de 5 elementos
    int *p3; // Creamos un puntero
    p3 = &c[1]; // p3 apunta a la direccion de c[1]
    int sam;
    sam = *(p3+3);
    std::cout << "*p3 = " << *p3 << endl;
    std::cout << "sam = " << sam << endl;
    return 0;
}