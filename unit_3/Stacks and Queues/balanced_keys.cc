#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    PilaEnteros pilaLlaves; // pila para guardar caracteres
    string expresion;

    cout << "Ingrese una expresion: ";
    getline(cin, expresion); // lee la expresion

    int n = expresion.size(); // tamaño de la expresion
    bool balanceadas = true;

    for (int i = 0; i < n && balanceadas; i++) {
        char letra = expresion.at(i); // obtiene el caracter en la posicion i

        if (letra == '{') {
            pilaLlaves.push((int) letra); // Conversion explicita
            pilaLlaves.imprimir();
        } else if (letra == '}') {
            if (pilaLlaves.estaPilaVacia()) {
                balanceadas = false;
            } else {
                pilaLlaves.pop(); // sacarf la llave de apertura
            }
            pilaLlaves.imprimir();
        }
    }

    if (balanceadas && pilaLlaves.estaPilaVacia()) {
        cout << "Las llaves estan balanceadas" << endl;
    } else {
        cout << "Las llaves no estan balanceadas" << endl;
    }
}