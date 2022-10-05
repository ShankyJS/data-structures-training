#include <iostream>
using namespace std;

int main() {
    char c = 'T', d = 'S';
    char *p1 = &c;
    char *p2 = &d;
    char *p3;
    std::cout << "p1 = " << p1 << std::endl;
    std::cout << "p2 = " << p2 << std::endl;
    p3 = &d;
    std::cout << "*p3 = " << *p3 << std::endl;
    p3 = p1;
    std::cout << "*p3 = " << *p3 << ", p3 = " << p3 << std::endl;
    *p1 = *p2;
    std::cout << "*p1 = " << *p1 << ", p1 = " << p1 << std::endl;
    return 0;
}