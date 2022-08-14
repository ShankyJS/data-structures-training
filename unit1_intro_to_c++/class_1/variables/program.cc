// Import iostream functions
#include <iostream>

// Use Standard functions
using namespace std;

// Declare main function; expect to return an integer.
int main()
{
    // Declaring a_number variable; expects that value is an int.
    int a_number;
    // Print message to indicate the user to insert a number.
    cout<<"Type an integer number: ";
    // This inserts the input from the user into the a_number var.
    cin>> a_number;
    // This will ignore the "enter" that is required after the user sends the input.
    cin.ignore();
    // Print the number that the user added as input.
    cout<<"Your number was: " << a_number << "\n";
    // Waits for the user to send a last enter to terminate the program. (This helps giving the user time to see the CLI).
    cin.get();
    // Return an integer so the program doesn't fail.
    return 0;
}

