#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			continue;
		}
		cout << "Hola" << endl;
	}
    return 0;
}
