#include <iostream>

using namespace std;

int main() {
    char letras[8] = {'J', 'U', 'V', 'E', 'N', 'T', 'U', 'D'};
    char *ptr1, *ptr2; // Creo dos punteros a char
    char temp; // Variable temporal para intercambiar valores
    ptr1 = &letras[4]; // ptr1 apunta a la letra 'N' indice 4
    cout << *ptr1 << endl; // Imprime N
    temp = *(ptr1 - 3); // temp indice es 1, valor es 'U'
    cout << temp << endl; // Imprime 'U'
    ptr2 = ptr1 - 4; // ptr1 es 4 menos 4 es 0, valor es 'J'
    cout << *ptr2 << endl; // Imprime 'J'
    temp = *++ptr2; // temp indice es 1, preincremento es 2, valor es 'U'
    cout << temp << endl; // Imprime 'U'
    ptr1 = ptr2++; // ahora ptr1 apunta a 'U' y ptr2 apunta a 'V'
    cout << *ptr1 << endl; // Imprime 'U' indice 2
    return 0;
}