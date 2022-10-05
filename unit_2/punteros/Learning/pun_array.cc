#include <iostream>

using namespace std;

int main() {
    int ramon[5];
    int *p4;
    p4 = ramon; // Apuntando a la primera posición del arreglo
    std::cout << "p4 = " << p4 << std::endl;
    std::cout << "ramon = " << ramon << std::endl;

    return 0;
}
