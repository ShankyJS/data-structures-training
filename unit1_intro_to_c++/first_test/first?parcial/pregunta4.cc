#include <iostream>
using namespace std;

int main() {
    int a = 20;
	int resultado = 0;

	while (a > 0) {
		resultado += a;
		a -= 4;
	}

	cout << resultado << endl;
    return 0;
}
