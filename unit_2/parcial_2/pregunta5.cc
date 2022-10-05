#include <iostream>

using namespace std;

int main() {
    char letras[8] = {'D', 'E', 'J', 'N', 'T', 'U', 'U', 'V'};

    int inf = 0; // indice inferior
    int sup = 7; // indice superior
    int medio = 0; // indice medio
    while (inf <= sup) {
        medio = (inf + sup) / 2;
        cout << "pase: " << inf << " " << sup << " " << medio << endl;
        if (letras[medio] == 'V') {
            cout << "encontrado" << endl;
            break;
        } else if (letras[medio] < 'V') {
            inf = medio + 1;
        } else {
            sup = medio - 1;
        }
    }
    return 0;
}