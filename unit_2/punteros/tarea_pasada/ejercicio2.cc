#include <iostream>

using namespace std;

int main() {
    int *p;
    int i;
    int k;
    i = 42;
    k = i;
    p = &i;
    std::cout << "i = " << i << std::endl;
    std::cout << "k = " << k << std::endl;
    std::cout << "p = " << p << std::endl;
    // asign 75 to i using pointer
    *p = 75;
    std::cout << "i = " << i << std::endl;
    return 0;
}