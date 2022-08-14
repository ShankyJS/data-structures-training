#include <iostream>
using namespace std;

int main()
{
    int magic_number, guess, try_counter; // Declare variables
    int max_tries = 3;

    srand(time(0));                 // Will generate the seed for the random generator with current second.
    magic_number = rand() % 10 + 1; // Use the seed to get the random number, parse it as a 1-10 number.

    for (int ctr = 0; ctr < max_tries; ctr++)
    {
        std::cout << "Guess the number: " << endl;
        std::cin >> guess;
        // Control structure
        if (magic_number == guess)
        {
            std::cout << "Correct!" << endl;
            return 0;
        }
        else if (magic_number > guess)
        {
            std::cout << "Sorry, my magic number is greater." << endl;
            std::cout << "----------------------------------" << endl;
        }
        else if (magic_number < guess)
        {
            std::cout << "Sorry, my magic number is lesser." << endl;
            std::cout << "---------------------------------" << endl;
        }
        if (ctr == max_tries - 1)
        {
            std::cout << "You loss the game, magic number was: " << magic_number << "." << endl;
        }
    }

    return 0;
}
