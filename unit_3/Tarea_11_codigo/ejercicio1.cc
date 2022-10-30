#include <iostream>

using namespace std;

class CuentaBancaria {
    private:
        string numeroCuenta;
        string nombreTitular;
        double saldo;
    public:
        CuentaBancaria();
        void getSaldo();
        void getNumeroCuenta();
        void getNombreTitular();
        void depositar(double importeDeposito);
        void retirar(double importeRetiro);
};

// Constructor

CuentaBancaria::CuentaBancaria() {
    numeroCuenta = "114293814";
    nombreTitular = "Jhan Carlos Silva Martinez";
    saldo = 1;
}

void CuentaBancaria::getSaldo() {
    cout << "Saldo: " << saldo << endl;
}

void CuentaBancaria::getNumeroCuenta() {
    cout << "Numero de cuenta: " << numeroCuenta << endl;
}

void CuentaBancaria::getNombreTitular() {
    cout << "Nombre del titular: " << nombreTitular << endl;
}

void CuentaBancaria::depositar(double importeDeposito) {
    if (importeDeposito > 0) {
        saldo += importeDeposito;
    } else {
        cout << "No se puede depositar un importe negativo: " << importeDeposito << endl;
        CuentaBancaria::getSaldo();
    }
}

void CuentaBancaria::retirar(double importeRetiro) {
    if (importeRetiro > 0) {
        if (importeRetiro > saldo) {
            cout << "Tu cuenta no puede quedar en saldo negativo" << endl;
            cout << "Tu saldo es: " << saldo << endl;
        } else {
            saldo -= importeRetiro;
        }
    } else {
        cout << "No se puede retirar un importe negativo: " << importeRetiro << endl;
        CuentaBancaria::getSaldo();
    }
}

int main() {
    CuentaBancaria cuenta;
    cuenta.getSaldo();
    cuenta.getNumeroCuenta();
    cuenta.getNombreTitular();
    cout << "Deposito de 100" << endl;
    cuenta.depositar(100);
    cuenta.getSaldo();
    cout << "Retiro de 101" << endl;
    cuenta.retirar(101);
    cuenta.getSaldo();
    cout << "Ingresamos mas dinero" << endl;
    cout << "Deposito de 200" << endl;
    cuenta.depositar(200);
    cuenta.getSaldo();
    cout << "Retiro de 101.50" << endl;
    cuenta.retirar(101.50);
    cuenta.getSaldo();
    cout << "Retiro de 100" << endl;
    cuenta.retirar(100); // Esta linea fallara por que el saldo es menor al importe a retirar
    cuenta.retirar(-100); // Esta linea fallara por que el importe a retirar es negativo
    return 0;
}