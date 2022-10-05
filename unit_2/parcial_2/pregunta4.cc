#include <iostream>

using namespace std;

int main() {
    char letras[8] = {'J', 'U', 'V', 'E', 'N', 'T', 'U', 'D'};
    cout << letras[5] << endl; // imprime T
    cout << letras[0] << letras[3] << letras[5]<< endl;  // imprime JET
    cout << (sizeof(letras) - 1) << endl; // imprime 7
    for (int i = 5; i > 2; i--)
      cout << letras[i] << " "; // imprime T N E
    cout << endl;
    cout << letras[sizeof(letras) / 2];   // imprime N
    return 0;
}