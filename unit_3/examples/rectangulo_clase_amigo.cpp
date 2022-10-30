// friend class
#include <iostream>
using namespace std;

class Cuadrado;

class Rectangulo {
  int ancho, alto;
  public:
    int area ()
      {return (ancho * alto);}
    void convertir (Cuadrado a);
};

class Cuadrado {
  friend class Rectangulo;
  private:
    int side;
  public:
    Cuadrado (int a) : side(a) {}
};

void Rectangulo::convertir (Cuadrado a) {
  ancho = a.side;
  alto = a.side;
}
  
int main () {
  Rectangulo rect;
  Cuadrado sqr (4);
  rect.convertir(sqr);
  cout << rect.area();
  return 0;
}
