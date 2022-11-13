#include "lista_generica.hpp"
#include "pila.hpp"
#include "cola.hpp"

using namespace std;

int main() {
    // Obtener dos etiquetas html de apertura y cierre, verificar que esten balanceadas y que no haya errores de apertura/cierre
    // Ejemplo: <html><head><title>Titulo</title></head><body><h1>Titulo</h1></body></html>
    string etiqueta;
    Pila<string> pila;
    Cola<string> cola;
    Pila<string> lista;
    cout << "Insertar etiqueta" << endl;
    cin >> etiqueta;
    for (int i = 0; i < etiqueta.length(); i++)
    {
        if (etiqueta[i] == '<')
        {
            string etiquetaAbierta = "";
            while (etiqueta[i] != '>')
            {
                etiquetaAbierta += etiqueta[i];
                i++;
            }
            etiquetaAbierta += '>';
            pila.push(etiquetaAbierta);
            cola.enqueue(etiquetaAbierta);
            lista.push(etiquetaAbierta);
        }
    }
    bool etiquetasEstanBalanceadas = true;
    while (!pila.estaPilaVacia() && !cola.estaColaVacia())
    {
        if (pila.pop() != cola.dequeue())
        {
            etiquetasEstanBalanceadas = false;
            break;
        }
    }
    if (etiquetasEstanBalanceadas)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}