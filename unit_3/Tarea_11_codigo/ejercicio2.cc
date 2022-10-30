#include <iostream>

using namespace std;

class Persona {
    private:
        string nombres;
        string apellidos;
        int anioNacimiento;
    public:
        Persona();
        void nombreCompleto();
        void edad();
};

Persona::Persona() {
    nombres = "Jhan Carlos";
    apellidos = "Silva Martinez";
    anioNacimiento = 2000;
}

void Persona::nombreCompleto() {
    std::cout << "Nombre completo: " << nombres << " " << apellidos << endl;
}

void Persona::edad() {
    std::cout << "Edad: " << 2022 - anioNacimiento << endl;
}

int main() {
    Persona jhan;
    jhan.nombreCompleto();
    jhan.edad();
    return 0;
}