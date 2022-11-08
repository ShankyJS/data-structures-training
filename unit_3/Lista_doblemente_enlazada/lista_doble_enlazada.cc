#include <iostream>

using namespace std;

// crear una lista doble enlazada con nodos
// que contienen un entero y un puntero al
// siguiente nodo
int main() {
    struct nodo {
        int dato;
        nodo *siguiente;
        nodo *anterior;
    };

    // crear un nodo
    nodo *nodo1 = new nodo;
    nodo1->dato = 1;
    nodo1->siguiente = NULL;
    nodo1->anterior = NULL;

    // crear otro nodo
    nodo *nodo2 = new nodo;
    nodo2->dato = 2;
    nodo2->siguiente = NULL;
    nodo2->anterior = nodo1;

    // conectar los nodos
    nodo1->siguiente = nodo2;

    // imprimir los datos de los nodos
    cout << nodo1->dato << endl;
    cout << nodo2->dato << endl;

    return 0;
}