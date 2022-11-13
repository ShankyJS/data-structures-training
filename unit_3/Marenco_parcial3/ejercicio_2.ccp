#include <iostream>
#include "cola.hpp"
#include "pila.hpp"

using namespace std;


int main()
{
    std::cout << "Insertar palabra" << endl;
    string palabra;
    cin >> palabra;
    Pila<char> pila;
    Cola<char> cola;

    for (int i = 0; i < palabra.length(); i++)
    {
        pila.push(palabra[i]);
        cola.enqueue(palabra[i]);
    }

    bool palabraEsPalindromo = true;
    while (!pila.estaPilaVacia() && !cola.estaColaVacia())
    {
        if (pila.pop() != cola.dequeue())
        {
            palabraEsPalindromo = false;
            break;
        }
    }
    if (palabraEsPalindromo)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}