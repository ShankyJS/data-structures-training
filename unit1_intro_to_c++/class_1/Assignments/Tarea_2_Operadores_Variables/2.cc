#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "*** Calculate operations between two numbers *** \n";
    cout << "Insert the first number: ";
    cin >> x;

    cout << "Insert the second number: ";
    cin >> y;

    cout << "Sum: " << x + y << endl; // Sum x + y
    cout << "Subs: " << x - y << endl; // Substract y from x
    cout << "Multiplication: " << x * y << endl; // Multiply x by y
    cout << "Division: " << x / y << endl; // Divide x by y

    int z = x;
    int w = y;

    cout << "Remainder is: " << z % w << endl; // Remainder of x % y

    ++x;
    ++y;
    cout << "Increment by one: " << "x: " << x << " y: " << y << endl;

    --x;
    --y;
    cout << "Decrease by one " << "x: " << x << " y: " << y << endl;

    return 0;
}
