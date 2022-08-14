#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x;
    cin >> y;

    bool var1 = true;
    bool var2 = false;

    // 0 = False and 1 = True

    cout << ( x < y ) << endl; // less than
    cout << ( x > y ) << endl; // greater than
    cout << ( x <= y ) << endl; // less than or equal to
    cout << ( x >= y ) << endl; // greater than or equal to
    cout << ( x != y ) << endl; // not equal to
    cout << ( x == y ) << endl; // equal to

    return 0;
}
