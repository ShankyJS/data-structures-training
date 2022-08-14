#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 3;

    cout << "0 = False and 1 = True" << endl;
    cout << ( x <= y ) << "\n"; // Returns 0 (false) because 5 is neither less than or equal to 3
    cout << ( x >= y ) << "\n"; // Returns 1 (true) because 5 is greater than or equal to 3
    cout << ( x < y ) << "\n"; // Returns 0 (false) because 5 is not less than 3
    cout << ( x > y ) << "\n"; // Returns 1 (true) because 5 is greater than 3
    cout << ( x != y ) << "\n"; // Returns 1 (true) because 5 is not equal to 3
    cout << ( x == y ) << "\n"; // Returns 0 (false) because 5 is not equal to 3
    return 0;
}
