#include <iostream>

using namespace std;

int main() {
  int x = 1;
  int i = 1;
  while (i <= 4) {
    x = x + 2*i;
    i++;
  }
  cout << "El valor de x es: " << x << endl;
}
