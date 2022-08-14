#include <iostream>

using namespace std;

int main()
{
    int i = 10, j = 11;
    bool b1 = true, b2 = false;

    if (i<j) { std::cout << "i < j\n"; } // i is less than j, then true
    if (i<=j) { std::cout << "i <= j\n"; } // i is less than or equal to j, then true
    if (i!=j) { std::cout << "i != j\n"; } // i is not equal to j, then true
    if (i==j) { std::cout << "This won't be executed\n"; } // i is not equal to j, then false
    if (i>=j) { std::cout << "This won't be executed\n"; } // i is not greater than or equal to j, then false
    if (i>j) { std::cout << "This won't be executed\n"; } // i is not greater than j, then false

    if (b1 && b2) { std::cout << "This won't be executed\n"; } // b1 is true and b2 is false, then false
    if (!(b1 && b2)) { std::cout << "!(b1 && b2) is true\n"; } // b1 is true and b2 is false, then true
    if (b1 || b2) { std::cout << "b1 || b2 is true";} // b1 is true or b2 is false, then true

    return 0;
}
