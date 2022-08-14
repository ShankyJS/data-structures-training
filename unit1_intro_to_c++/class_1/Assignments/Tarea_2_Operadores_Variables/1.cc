// Author: Jhan Silva
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int x = 5;
    int y = 2;
    // Start operations
    cout << x + y << endl; // Sum x + y
    cout << x - y << endl; // Substract x from y
    cout << x * y << endl; // Multiply x * y

    x = 12; // Assign x a new value
    y = 3; // Assign y a new value
    cout << x / y << endl; // Divide x by y

    x = 5; // Assign x a new value
    y = 2; // Assign y a new value
    cout << x % y << endl; // Remainder of x % y (rounded to the nearest).

    ++x; // Increments x by 1
    cout << x << endl; // Prints x

    x = 5; // Assign X a new value
    --x; // Decreases X by 1
    cout << x << endl; // Prints X again
    return 0; // End

}
