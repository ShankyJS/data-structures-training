#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int movJug;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Alumno: Jhan Carlos Silva Martinez" << endl;
    cout << "Carnet: SM100218" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Bienvenido al juego 🎰" << endl;
    cout << "Juguemos piedra, papel, tijera, lagarto o Spock elije tu movimiento." << endl;
    cout << "1) Piedra \n2) Papel \n3) Tijera \n4) Lagarto\n5) Spock\n" << endl;
    cin >> movJug;

    srand(time(0));
    string movComp;
    int numMov = rand() % 5 + 1;
    switch(numMov) {
        case 1:
            movComp = "Piedra";
            break;
        case 2:
            movComp = "Papel";
            break;
        case 3:
            movComp = "Tijera";
            break;
        case 4:
            movComp = "Lagarto";
            break;
        case 5:
            movComp = "Spock";
            break;
    }
    cout << "La computadora eligio " << movComp << endl;
    if (movJug == numMov) {
        cout << "Empate" << endl;
    } else if (movJug == 3 && numMov == 2) { // Tijera vs papel => Gana papel (Las tijeras cortan papel)
        cout << "Ganaste" << endl;
    } else if (movJug == 2 && numMov == 1) { // Papel vs piedra => Gana papel (El papel envuelve la piedra)
        cout << "Ganaste" << endl;
    } else if (movJug == 1 && numMov == 4) { // Piedra vs lagarto => Gana piedra (La piedra aplasta al lagarto)
        cout << "Ganaste" << endl;
    } else if (movJug == 4 && numMov == 5) { // Lagarto vs spock => Gana lagarto (El lagarto envenena a Spock)
        cout << "Ganaste" << endl;
    } else if (movJug == 5 && numMov == 3) { // Spock vs tijera => Gana spock (Spock rompe las tijeras)
        cout << "Ganaste" << endl;
    } else if (movJug == 3 && numMov == 4) { // Tijera vs lagarto => Gana tijera (Las tijeras decapitan al lagarto)
        cout << "Ganaste" << endl;
    } else if (movJug == 4 && numMov == 2) { // Lagarto vs papel => Gana lagarto    (El lagarto se come el papel)
        cout << "Ganaste" << endl;
    } else if (movJug == 2 && numMov == 5) { // Papel vs spock => Gana papel (El papel desaprueba a Spock)
        cout << "Ganaste" << endl;
    } else if (movJug == 5 && numMov == 1) { // Spock vs piedra => Gana spock (Spock desintegra la piedra)
        cout << "Ganaste" << endl;
    } else if (movJug == 1 && numMov == 3) { // Piedra vs tijera => Gana piedra (La piedra aplasta las tijeras como siempre 🪨)
        cout << "Ganaste" << endl;
    } else {
        cout << "Perdiste" << endl;
    }
    return 0;
}

