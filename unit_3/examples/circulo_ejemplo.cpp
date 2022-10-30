// ejemplo: clases e inicializacion uniforme
#include <iostream>
using namespace std;

class Circulo {
    double radio;
  public:
    Circulo(double r);
    double circunf();
    double area();
};

Circulo::Circulo(double r) {
   radio = r;
}

double Circulo::circunf() {
 return 2*radio*3.14159265; 
}

double Circulo::area() {
 return radio*radio*3.14159265; 
}

class Cilindro {
	Circulo base;
	double altura;
   public:
    Cilindro(double r, double h) : base(r), altura(h) {}
	double volumen() { return base.area()*altura; }
};

int main () {
 Circulo circ1(5.6); // inicializaci�n funcional
 cout << "Circunferencia del Circulo 1: " << circ1.circunf() << endl;
 cout << "Area del Circulo 1: " << circ1.area() << endl;
 
 Circulo circ2 = 14.1; // inicializaci�n por asignaci�n o tipo variable
 cout << "Circunferencia del Circulo 2: " << circ2.circunf() << endl;
 cout << "Area del Circulo 2: " << circ2.area() << endl;
 
 Circulo circ3 {2.3}; // inicializaci�n uniforme
 cout << "Circunferencia del Circulo 3: " << circ3.circunf() << endl;
 cout << "Area del Circulo 3: " << circ3.area() << endl;
  
 Cilindro cilindro1(3,15);
 cout << "Volumen del Cilindro 1: " << cilindro1.volumen() << endl;
  
 return 0;
}

