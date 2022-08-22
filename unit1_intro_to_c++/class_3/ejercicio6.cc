#include <iostream>

using namespace std;

int main() {
  int inicio=1, fin=1000, contadorMaxDivisor = 0, maxDivisor=1;
  // Conteo del 1 al 1000
  for(int inicio; inicio <= fin; inicio++) {
    int contadorDivisor = 0;
    // Iteramos intentando dividir cada numero del 1 al 1000 entre i para obtener divisores
    for(int i=1; i<=inicio; i++) {
      if(inicio%i == 0) {
        // Si el residuo es 0 sumamos 1 a contador divisor
        contadorDivisor++;
      }
    }
    if(contadorDivisor > contadorMaxDivisor) {
      contadorMaxDivisor = contadorDivisor;
      maxDivisor = inicio;
    }
  }
  cout << "El maximo divisor es " << maxDivisor << " y tiene: " << contadorMaxDivisor << " divisores." << endl;
}
