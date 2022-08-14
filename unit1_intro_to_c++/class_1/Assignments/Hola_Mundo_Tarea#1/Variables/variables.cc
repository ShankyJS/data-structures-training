// Author: Jhan Carlos Silva Martinez

#include <iostream>

using namespace std;

int main()
{
    // Declaring int vars.
    int a = 10;
    double ourNumber = 564.4961;
    auto d = a;
    int f = 0;
    decltype(f) g;
    // Initialize constructor.
    double b (54);
    double c {15.13};
    // Print results
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << g << endl;
    // Process
    c = a + ourNumber;
    cout << c << endl;
    c = b + ourNumber;
    cout << c << endl;

    // Finalize the program
    return 0;
}
