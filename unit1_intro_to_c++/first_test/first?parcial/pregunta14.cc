#include <iostream>
using namespace std;

int main() {

    char genero = "M";
	switch (genero) {
		case 'M':
			cout << "Masculino" << endl;
			break;
		case 'F':
			cout << "Femenino" << endl;
			break;
		default:
			cout << "Otro" << endl;
			break;
	}

	return 0;
}
