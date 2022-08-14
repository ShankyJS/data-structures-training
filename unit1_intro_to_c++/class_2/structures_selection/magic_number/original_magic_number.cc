#include <iostream>
using namespace std;

int main()
{
    int magic_number, guess, try_counter; // Declare variables
    srand(time(0));          // Will generate the seed for the random generator with current second.
    magic_number = rand() % 10 + 1; // Use the seed to get the random number, parse it as a 1-10 number.

    // Give the user the opportunity to guess the number
    std::cout << "Guess the number: " << endl;
    std::cin >> guess;

    // Control structure
    if (magic_number == guess)
    {
        std::cout << "Correct!" << endl;
    }
    else if (magic_number > guess)
    {
        std::cout << "Sorry, my magic number (" << magic_number << ") is greater." << endl;
        std::cout << "-----------------------------------------------------------" << endl;
    }
    else if (magic_number < guess)
    {
        std::cout << "Sorry, my magic number (" << magic_number << ") is lesser." << endl;
        std::cout << "-----------------------------------------------------------" << endl;
    }

    return 0;
}
