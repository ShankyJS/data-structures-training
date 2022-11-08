#include <iostream>
#include "cola.hpp"
#include "pila.hpp"
#include <string>

using namespace std;

// usando pila.hpp y cola.hpp detectar cuando una palabra sea palindrome

int main()
{
    cout << "Ingrese una palabra para determinar si es palindromo: ";
    // Ignore special characters, spaces, etc
    string palabra;
    cin >> palabra;
    // Remove special characters, spaces and convert to lowercase
    string palabraSinEspeciales;
    for (int i = 0; i < palabra.length(); i++) {
        if (isalpha(palabra[i])) {
            palabraSinEspeciales += tolower(palabra[i]);
        }
    }

    Pila<char> pila;
    Cola<char> cola;
    for (int i = 0; i < palabraSinEspeciales.length(); i++)
    {
        pila.push(palabraSinEspeciales[i]);
        cola.enqueue(palabraSinEspeciales[i]);
    }
    bool esPalindromo = true;
    while (!pila.estaPilaVacia() && !cola.estaColaVacia())
    {
        if (pila.pop() != cola.dequeue())
        {
            esPalindromo = false;
            break;
        }
    }
    if (esPalindromo) // Returns boolean
    {
        cout << "La palabra " << palabraSinEspeciales << " es palindromo" << endl;
    }
    else
    {
        cout << "La palabra " << palabraSinEspeciales << " no es palindromo" << endl;
    }
    return 0;
}