// Lista_generica.hpp
// Jhan Silva


#ifndef lista_generica_hpp
#define lista_generica_hpp

#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::ostringstream;
using std::cout;
using std::endl;

template <typename TIPODATO>
class Lista {
    private:
        int cuenta;
        int capacidad;
        TIPODATO *items;
        void agrandar();
    public:
        Lista(int capacidad);
        Lista();
        ~Lista();
        Lista(const Lista &otra); // Crear una lista a partir de otra en memoria
        bool estaVacia();
        int tamano();
        void insertar(int indice, TIPODATO item);
        void adjuntar(TIPODATO item);
        TIPODATO obtener(int indice);
        bool contiene(TIPODATO item);
        TIPODATO remover(int indice);
        string comoCadena();
};

// Constructor

template <typename TIPODATO>
Lista<TIPODATO>::Lista(int capacidad) {
    cout << "Creando una lista vacia..." << endl;
    this->cuenta = 0;
    this->capacidad = capacidad;
    this->items = new TIPODATO[capacidad];
    cout << " La lista tiene capacidad para " << this->capacidad << " elementos." << endl;
}

// Constructor por defecto
template <typename TIPODATO>
Lista<TIPODATO>::Lista() : Lista(4) {}

// Destructor de la lista
template <typename TIPODATO>
Lista<TIPODATO>::~Lista() {
    cout << "Destruyendo la lista..." << endl;
    delete[] items;
}

// Construir una lista a partir de otra en memoria
template <typename TIPODATO>
Lista<TIPODATO>::Lista(const Lista &otra) {
    cout << "Copiando una lista a partir de otra..." << endl;
    this->cuenta = otra.cuenta;
    this->capacidad = otra.capacidad;
    this->items = new TIPODATO[capacidad];
    for (int i = 0; i < this->cuenta; i++) {
        this->items[i] = otra.items[i];
    }
}

// Esta la lista vacia?
template <typename TIPODATO>
bool Lista<TIPODATO>::estaVacia() {
    cout << "Comprobando si la lista esta vacia..." << endl;
    return this->cuenta == 0;
}

// Obtener el tamaño de la lista
template <typename TIPODATO>
int Lista<TIPODATO>::tamano() {
    cout << "Obteniendo el tamaño de la lista..." << endl;
    return this->cuenta;
}

template <typename TIPODATO>
void Lista<TIPODATO>::agrandar() {
    cout << "Duplicando el tamano de la lista..." << endl;
    TIPODATO *temp = this->items;
    this->capacidad *= 2;
    this->items = new TIPODATO[capacidad];
    for (int i = 0; i < cuenta; i++)
        this->items[i] = temp[i];
    delete[] temp;
    cout << " La lista tiene capacidad para " << this->capacidad << " elementos." << endl;
}

// Insertar un elemento en una posicion especifica

template <typename TIPODATO>
void Lista<TIPODATO>::insertar(int indice, TIPODATO item) {
    // Validar el indice
    if (indice < 0 || indice > this->cuenta) throw "Indice fuera de rango";

    // Agrandar la lista si el elemento no cabe
    if (this->cuenta == this->capacidad) this->agrandar();

    cout << "Insertado un elemento..." << endl;
    // Mover los elementos a la derecha
    for (int i = cuenta - 1; i >= indice; i--) {
        cout << " Desplazando el elemento " << items[i] << " del indice " ;
        cout << i << " al indice " << i + 1 << endl;
        this->items[i + 1] = this->items[i];
    }

    // Insertar un nuevo elemento
    cout << " Insertando el elemento " << item << " en el indice " << indice << endl;
    this->items[indice] = item;

    // Incrementar la cuenta de elementos
    cout << " Incrementando la cuenta de elementos..." << endl;
    this->cuenta++;
}

// Agregar un elemento al final
template <typename TIPODATO>
void Lista<TIPODATO>::adjuntar(TIPODATO item) {
    this->insertar(this->cuenta, item);
}

// valor del elemento en la posicion indice
template <typename TIPODATO>
TIPODATO Lista<TIPODATO>::obtener(int indice) {
    // Validar el indice
    if (indice < 0 || indice >= this->cuenta) throw "Indice fuera de rango";
    if (this->estaVacia()) throw "No se puede recuperar elementos de una lista vacia";
    cout << "Obteniendo el elemento en el indice " << indice << endl;
    return this->items[indice];
}

// Esta el item en la lista?

template <typename TIPODATO>
bool Lista<TIPODATO>::contiene(TIPODATO item) {
    for (int i = 0; i < this->cuenta; i++) {
        cout << "Recorriendo elemento con indice " << i << endl;
        if (this->items[i] == item)
            return true;
    }
    return false;
}

// Remover elemento en el indice indice
template <typename TIPODATO>
TIPODATO Lista<TIPODATO>::remover(int indice) {
    // Validar el indice
    if (this->estaVacia()) throw "No se puede remover elementos de una lista vacia";
    if (indice < 0 || indice >= this->cuenta) throw "Indice fuera de rango";

    cout << "Removiendo el elemento con indice " << indice << "..." << endl;
    // Lee el valor en el indice y desplaza elementos a la izquierda
    TIPODATO valor = this->items[indice];
    for (int i = indice; i < this->cuenta - 1; i++) {
        cout << " Desplazando el elemento " << items[i + 1] << " del indice " ;
        cout << i + 1 << " al indice " << i << endl;
        this->items[i] = this->items[i + 1];
    }

    // Reducir la cuenta de leemntso
    cout << " Reduciendo la cuenta de elementos..." << endl;
    this->cuenta--;
    return valor;
}

template<typename TIPODATO>
string Lista<TIPODATO>::comoCadena() {
    ostringstream s;
    s << "[";
    for (int i = 0; i < this->cuenta; i++) {
        s << this->items[i];
        if (i < this->cuenta - 1)
            s << ", ";
    }
    s << "]";
    return s.str();
}

#endif /* lista_generica_hpp */