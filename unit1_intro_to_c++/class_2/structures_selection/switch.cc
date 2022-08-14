#include <iostream>
using namespace std;

int main()
{
    int num;
    std::cout << "Insert a number from [1, 3]." << endl;
    std::cin >> num;

    switch (num) {
        case 1:
            std::cout << "Half a loaf is better than none." << endl;
            break;
        case 2:
            std::cout << "When one is tired, all beds are good" << endl;
            break;
        case 3:
            std::cout << "Beauty is in the eye of the beholder" << endl;
            break;
        default:
            std::cout << "You must use one option from 1 to 3." << endl;
    }

    return 0;
}
