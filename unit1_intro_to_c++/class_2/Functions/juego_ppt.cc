#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

// Prototipos

std::string generarMovimientoComputadora();
std::string obtenerMovimientoJugador();
void determinarGanador(std::string computadora, std::string jugador);
void procesarEntradaJugadorPiedra(std::string computadora);
void procesarEntradaJugadorPapel(std::string computadora);
void procesarEntradaJugadorTijera(std::string computadora);

int main()
{
    using namespace std;

    string movimientoComputadora;
    string movimientoJugador;

    movimientoJugador = obtenerMovimientoJugador();
    movimientoComputadora = generarMovimientoComputadora();
    determinarGanador(movimientoComputadora, movimientoJugador);

    return 0;
}

// Implementacion de generarMovimientoComputadora
std::string generarMovimientoComputadora()
{
    std::string movimiento;
    int numeroAleatorio;

    // Generando numero aleatorio
    srand(time(0));
    numeroAleatorio = rand() % 3 + 1;

    switch (numeroAleatorio)
    {
    case 1:
        movimiento = "piedra";
        break;
    case 2:
        movimiento = "papel";
        break;
    case 3:
        movimiento = "tijera";
        break;
    }
    std::cout << "Computadora elige: " << movimiento << "\n";

    return movimiento;
}

std::string obtenerMovimientoJugador()
{
    using namespace std;
    string movimiento;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Alumno: Jhan Carlos Silva Martinez" << endl;
    cout << "Carnet: SM100218" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "piedra, papel o tijera (para terminar el juego escriba salir)? ";
    cin >> movimiento;

    return movimiento;
}

void determinarGanador(std::string computadora, std::string jugador)
{
    if (computadora == jugador)
    {
        std::cout << "Empate!\n";
    }
    else if (jugador == "piedra")
    {
        procesarEntradaJugadorPiedra(computadora);
    }
    else if (jugador == "papel")
    {
        procesarEntradaJugadorPapel(computadora);
    }
    else if (jugador == "tijera")
    {
        procesarEntradaJugadorTijera(computadora);
    }
    else if (jugador == "salir")
    {
        std::cout << "Elegiste salir; gracias por jugar!\n";
    }
    else
    {
        std::cout << "Entrada no valida. Ingrese piedra, papel o tijera.\n";
    }
}

void procesarEntradaJugadorPiedra(std::string computadora)
{
    if (computadora == "papel")
    {
        std::cout << "La computadora gana. Papel cubre piedra.\n";
    }
    else if (computadora == "tijera")
    {
        std::cout << "Usted gana. Piedra rompe tijera.\n";
    }
}

void procesarEntradaJugadorPapel(std::string computadora)
{
    if (computadora == "tijera")
    {
        std::cout << "La computadora gana. Tijera corta papel.\n";
    }
    else if (computadora == "piedra")
    {
        std::cout << "Usted gana. Papel envuelve piedra.\n";
    }
}

void procesarEntradaJugadorTijera(std::string computadora)
{
    if (computadora == "piedra")
    {
        std::cout << "La computadora gana. La piedra rompe las tijeras.\n";
    }
    else if (computadora == "papel")
    {
        std::cout << "Usted gana. Tijera corta papel.\n";
    }
}
