#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int x = 5;

    cout << x <<" = "<< bitset<8>(x) << endl;
    cout << "3: "<< bitset<8>(3) << endl;
    cout << x <<" AND 3 ( & ) = \n";

    x &= 3; // x - x & 3     & : bitwise AND, 1 if both bits are 1, 0 otherwise
    cout << x << "\t" << bitset<8>(x) << endl;

    x = 5; // reset x to 5
    cout << x <<"OR 3 ( | ) = \n";

    x |= 3; // x - x | 3     | : bitwise OR, 1 if either bit is 1, 0 otherwise
    cout << x << "\t" << bitset<8>(x) << endl;

    x = 5; // reset x to 5
    cout << x <<"XOR 3 ( ^ ) = \n";

    x ^= 3; // x - x ^ 3     ^ : bitwise XOR, 1 if only one bit is 1, 0 otherwise
    cout << x << "\t" << bitset<8>(x) << endl;

    cout << "........................." << endl; // just to make it look nice

    x = 13;
    cout << x <<":" << "\t" << bitset<8>(x) << endl;
    cout << x << " >> 3 = \n";
    x >>= 3; // x - x >> 3   >> : bitwise right shift, shift bits to the right
    cout << x <<":" << "\t" << bitset<8>(x) << endl;

    x = 13;
    cout << x <<" << 3 = \n";
    x <<= 3; // x - x << 3   << : bitwise left shift, shift bits to the left
    cout << x << "\t" << bitset<8>(x) << endl;


    return 0;
}
