#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x;
    cin >> y;

    x += y; // It's like doing x = x + y
    cout << x << endl;

    x -= y; // It's like doing x = x - y
    cout << x << endl;

    x *= y; // It's like doing x = x * y
    cout << x << endl;

    x /= y; // It's like doing x = x / y
    cout << x << endl;

    x %= y; // It's like doing x = x % y
    cout << x << endl;

    return 0;
}
