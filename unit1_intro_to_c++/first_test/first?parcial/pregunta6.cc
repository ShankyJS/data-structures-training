#include <iostream>
using namespace std;

int main() {
    int i = 3;
	do {
		cout << i << " ";
		i += 2;
		if (i % 3 == 0) break;
	} while (true);
	cout << endl;
    return 0;
}
