#include <iostream>

using namespace std;

int main() {
    char letras[8] = {'J', 'U', 'V', 'E', 'N', 'T', 'U', 'D'};
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7 - i; j++) {
            if (letras[j] > letras[j + 1]) {
                char temp = letras[j];
                letras[j] = letras[j + 1];
                letras[j + 1] = temp;
            }
        }
        for (int k = 0; k < 8; k++) {
            cout << letras[k];
        }
        cout << endl;
    }

    return 0;

}