// friend functions
#include <iostream>
using namespace std;

class Rectangulo {
    int ancho, alto;
  public:
    Rectangulo() {}
    Rectangulo (int x, int y) : ancho(x), alto(y) {}
    int area() {return ancho * alto;}
    friend Rectangulo duplicado (const Rectangulo&);
};

Rectangulo duplicado (const Rectangulo& param)
{
  Rectangulo res;
  res.ancho = param.ancho*2;
  res.alto = param.alto*2;
  return res;
}

int main () {
  Rectangulo foo;
  Rectangulo bar (2,3);
  foo = duplicado (bar);
  cout << foo.area() << '\n';
  return 0;
}
