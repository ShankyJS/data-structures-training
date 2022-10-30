// derived classes
#include <iostream>
using namespace std;

class Poligono {
  protected:
    int ancho, alto;
  public:
    void set_valores (int a, int b)
      { ancho=a; alto=b;}
 };

class Rectangulo: public Poligono {
  public:
    int area ()
      { return ancho * alto; }
 };

class Triangulo: public Poligono {
  public:
    int area ()
      { return ancho * alto / 2; }
  };
  
int main () {
  Rectangulo rect;
  Triangulo trgl;
  rect.set_valores (4,5);
  trgl.set_valores (4,5);
  cout << rect.area() << '\n';
  cout << trgl.area() << '\n';
  return 0;
}
