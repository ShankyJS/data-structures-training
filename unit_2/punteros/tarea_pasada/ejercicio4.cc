#include <iostream>

using namespace std;

int main() {
    char bloques[3] = {'A','B','C'};
    char *ptr = &bloques[0];
    char temp;

    temp = bloques[0]; // temp = 'A'
    temp = *(bloques + 2); // temp = 'C'
    temp = *(ptr + 1); // temp = 'B'
    temp = *ptr; // temp = 'A'

    ptr = bloques + 1; // ptr = &bloques[1]
    temp = *ptr; // temp = 'B'
    temp = *(ptr + 1); // temp = 'C'

    ptr = bloques; // ptr = &bloques[0]
    temp = *++ptr; // temp = 'B'
    temp = ++*ptr; // temp = 'C'
    temp = *ptr++; // temp = 'C'
    temp = *ptr; // temp = 'C'

    return 0 ;
}