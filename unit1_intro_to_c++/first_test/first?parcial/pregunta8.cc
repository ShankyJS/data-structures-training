#include <iostream>
using namespace std;

int main() {

    int x = 3, y = 5;

	if (2 * x > y) {
		cout << "foo" << endl;
	} else if (x < y) {
		cout << "bar" << endl;
	} else {
		cout << "baz" << endl;
	}

	return 0;
}
