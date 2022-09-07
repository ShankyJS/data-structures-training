#include <iostream>
using namespace std;

int main()
{
    // Declarando funcion externa para validar año bisiesto.
    bool esBisiesto(int year);
    cout << "###########################################" << endl;
    cout << "Bienvenido a mi programa para el parcial #1" << endl;
    cout << "Jhan Carlos Silva Martinez / Carnet SM100218" << endl;
    cout << "###########################################" << endl;
    srand(time(0));
    // Generar un año aleatorio entre 1980 y 2015
    int randomYear = rand() % 36 + 1980;
    cout << "Por favor ingrese su año de nacimiento: ";
    int usuarioYear;
    cin >> usuarioYear;
    // Determinar si el input del usuario esta entre 1980 y 2015
    if (usuarioYear < 1980 || usuarioYear > 2015)
    {
        cout << "El año ingresado no es valido" << endl;
        return 0;
    }
    // Determinar si los años son bisiestos o no.
    bool randomYearBisiesto = esBisiesto(randomYear);
    bool usuarioYearBisiesto = esBisiesto(usuarioYear);

    // Si ambos son iguales, imprimimos ambos y decimos si son bisiestos o no
    if (randomYear == usuarioYear)
    {
        cout << "El año seleccionado por la computadora(" << randomYear << ") y el año ingresado por el usuario(" << usuarioYear << ") son iguales." << endl;
        if (randomYearBisiesto)
        {
            cout << "El año insertado por la computadora (" << randomYear << ") es bisiesto" << endl;
        }
        else
        {
            cout << "El año insertado por la computadora (" << randomYear << ") no es bisiesto" << endl;
        }
        if (usuarioYearBisiesto)
        {
            cout << "El año insertado por el usuario (" << usuarioYear << ") es bisiesto" << endl;
        }
        else
        {
            cout << "El año insertado por el usuario (" << usuarioYear << ") no es bisiesto" << endl;
        }
    }
    // Si ambos son diferentes, imprimimos ambos y decimos si son bisiestos o no.
    if (randomYear != usuarioYear)
    {
        cout << "El año seleccionado por la computadora(" << randomYear << ") y el año ingresado por el usuario(" << usuarioYear << ") no son iguales." << endl;
        if (randomYearBisiesto)
        {
            cout << "El año insertado por la computadora (" << randomYear << ") es bisiesto" << endl;
        }
        else
        {
            cout << "El año insertado por la computadora (" << randomYear << ") no es bisiesto" << endl;
        }
        if (usuarioYearBisiesto)
        {
            cout << "El año insertado por el usuario (" << usuarioYear << ") es bisiesto" << endl;
        }
        else
        {
            cout << "El año insertado por el usuario (" << usuarioYear << ") no es bisiesto" << endl;
        }
    }

    return 0;
}

// Funcion para determinar si un año es bisiesto

bool esBisiesto(int year)
{
    if (year % 4 != 0)
    {
        return false;
    }
    else if (year % 100 != 0)
    {
        return true;
    }
    else if (year % 400 != 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
