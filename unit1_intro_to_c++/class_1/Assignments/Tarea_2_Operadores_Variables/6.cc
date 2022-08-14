#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int x = 5;
    int y = 3;

    cout << "\tDecimal" << "\t :\t Binary" << endl;
    cout << "\t" << x << " \t :\t " << bitset<8>(x) << endl;
    cout << "\t" << y << " \t :\t " << bitset<8>(y) << endl;

    // AND Binary x &= y is the same as x = x & y
    int z = x & y;
    cout << "x & y \t" << z << " \t : \t" << bitset<8>(z) << endl;

    // OR Binary x |= y is the same as x = x | y
    z = x | y;
    cout << "x | y \t" << z << " \t : \t" << bitset<8>(z) << endl;

    // XOR Binary x ^= y is the same as x = x ^ y
    z = x ^ y;
    cout << "x ^ y \t" << z << " \t : \t" << bitset<8>(z) << endl;

    // Shift binary x <<= y is the same as x = x << y
    z = x << y;
    cout << "x << y \t" << z << " \t : \t" << bitset<8>(z) << endl;

    // Shift binary x >>= y is the same as x = x >> y
    z = x >> y;
    cout << "x >> y \t" << z << " \t : \t" << bitset<8>(z) << endl;
    return 0;
}
