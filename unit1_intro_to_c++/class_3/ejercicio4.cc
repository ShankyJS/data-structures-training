#include <iostream>

using namespace std;

int main() {
  int number;
  cout << "Write the number you want to calculate factorial: ";
  cin >> number;
  int counter = 1;
  int factorial = 1;
  while(counter <= number) {
    factorial *= counter;
    counter++;
  }
  cout << "Factorial of (" << number << ") is: " << factorial << endl;
  return 0;
}
