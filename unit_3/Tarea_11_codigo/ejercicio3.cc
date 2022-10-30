#include <iostream>

using namespace std;

class Personaje {
    private:
        string nombre;
        int puntosVida;
    public:
        Personaje();
        void getNombre();
        void getPuntosVida();
        bool estaVivo();
        void recibirGolpe(int puntosPerdidos);
        void comer(int puntosGanados);
};

// Constructor

Personaje::Personaje() {
    nombre = "Shanky";
    puntosVida = 100;
}


void Personaje::getNombre() {
    cout << "Nombre personaje: " << nombre << endl;
}

// Método getPuntosVida que imprime los puntos de vida del personaje
void Personaje::getPuntosVida() {
    cout << "Puntos de vida: " << puntosVida << endl;
}

// Método estaVivo que devuelve true si el personaje tiene más de 0 puntos de vida.
bool Personaje::estaVivo() {
    if (puntosVida > 0) {
        return true;
    } else {
        return false;
    }
}

// Método recibir golpe, que sustrae puntos de vida al personaje según el ataque realizado.
void Personaje::recibirGolpe(int puntosPerdidos) {
    if (!Personaje::estaVivo()) {
        std::cout << nombre << " está muerto, ya no puede recibir más golpes💀";
    } else {
        puntosVida -= puntosPerdidos;
    }

}

// Método comer, es el contrario de recibirGolpe, el personaje come y gana vida!
void Personaje::comer(int puntosGanados) {
    if (!Personaje::estaVivo()) {
        std::cout << nombre << " está muerto💀, y los muertos no comen :(" << endl;
    } else {
        puntosVida += puntosGanados;
    }
}

int main() {
    Personaje shanky;
    shanky.getNombre();
    shanky.getPuntosVida();
    shanky.estaVivo(); // true (1 significa true, 0 significa false).
    std::cout << "Ataque de 50 puntos a Shanky" << endl;
    shanky.recibirGolpe(50);
    shanky.getPuntosVida();
    std::cout << "Shanky come pollo para curarse 50 de vida" << endl;
    shanky.comer(50);
    shanky.getPuntosVida();
    std::cout << "Shanky recibe un ataque mortal de 500 puntos" << endl;
    shanky.recibirGolpe(500);
    std::cout << "Shanky intenta comer 100 puntos para revivir..." << endl;
    shanky.comer(100);
    std::cout << "Shanky recibe un ataque de 1 punto" << endl;
    shanky.recibirGolpe(1);
    return 0;
}