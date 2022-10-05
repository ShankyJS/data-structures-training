#include <iostream>

using namespace std;

int main() {
    int paul = 21;
    int *melissa, *dave;
    melissa = &paul;
    dave* = melissa;
    std::cout << "paul: " << paul << std::endl;
    std::cout << "melissa: " << melissa << std::endl;
    std::cout << "dave: " << dave << std::endl;
    return 0;
}
