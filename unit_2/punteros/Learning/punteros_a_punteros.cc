#include <iostream>

using namespace std;

int main() {
    int paul = 21;
    int* melissa = &paul;
    int dave = *melissa;
    int *tom = &dave;
    int **ramon = &tom;

    cout << "paul        : " << paul << endl; // Valor de paul 21
    cout << "&paul       : " << &paul << endl; // Dirección de paul
    cout << "melissa     : " << melissa << endl; // Dirección de paul
    cout << "&melissa    : " << &melissa << endl; // Dirección de melissa
    cout << "dave        : " << dave << endl; // Valor de paul 21
    cout << "&dave       : " << &dave << endl; // Dirección de dave
    cout << "tom         : " << tom << endl; // Dirección de dave
    cout << "&tom        : " << &tom << endl; // Dirección de tom
    cout << "ramon       : " << ramon << endl; // Dirección de tom
    cout << "*ramon      : " << *ramon << endl; // Dirección de dave
    cout << "**ramon     : " << **ramon << endl; // Valor de paul 21

}