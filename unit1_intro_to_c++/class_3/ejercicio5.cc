#include <iostream>

using namespace std;

int main()
{
  int maxNumber = 10;
  int minNumber = 0;
  int inputNumber;
    do
    {
        cout << "Inserta un numero entre " << minNumber << " y " << maxNumber << endl;
        cin >> inputNumber;
        if (inputNumber >= minNumber && inputNumber <= maxNumber)
        {
            cout << "Gracias, numero correcto" << endl;
        } else {
            cout << "Numero incorrecto, vuelve a intentarlo" << endl;
        }
    } while (inputNumber < minNumber || inputNumber > maxNumber);
  return 0;
}