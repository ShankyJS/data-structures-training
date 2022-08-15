#include <iostream>

using namespace std;

float calculate(float x, float y, char op)
{
    float r = 0;
    switch(op) {
        case '+':
            r = x + y;
            break;
        case '-':
            r = x - y;
            break;
        case '*':
            r = x * y;
            break;
        case '/':
            r = x / y;
            break;
        default:
            cout << "Invalid operator use either [+,-,*,/]" << endl;
    }

    return r;
}

int main()
{
    float x; // First number
    float y; // Second Number
    float r; // Result of the operation
    char op; // Option inserted by the user

    cout << "🧮 Simple calculator" << endl;
    cout << "Insert the first number: ";
    cin >> x;
    cout << "Insert the second number: ";
    cin >> y;
    cout << "Operation (+|-|*|/): ";
    cin >> op;

    r = calculate(x, y, op);

    cout << "x " << op << " y = " << r << endl;

    return 0;

}
