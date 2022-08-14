#include <iostream>

using namespace std;

int main()
{
  int option;
  float a,b,result;
  cout<<"This program will allow you to run additions, substraction, divison or multiplication.\n";
  cout<<"Insert the number of the option you want in order to run that operation\n";
  cout<<"Addition => 1\nSubstraction => 2 \nMultiplication => 3 \nDivision => 4\n\n";
  cout<<"Insert your option: ";
  cin>> option;
  cin.ignore();
  cout<<"Insert first number of the operation: ";
  cin>> a;
  cin.ignore();
  cout<<"Insert second number of the operation: ";
  cin.ignore();
  cin>> b;

  // Start conditional
  if(option == 1)
  {
      result = a+b;
      cout << "Result is: "<< result <<  ".";
      return 0;
  }
  if(option == 2)
  {
      result = a-b;
      cout << "Result is: "<< result <<  ".";
      return 0;
  }
  if(option == 3)
  {
      result = a*b;
      cout << "Result is: "<< result <<  ".";
      return 0;
  }
  if(option == 4)
  {
      result = a/b;
      cout << "Result is: "<< result <<  ".";
      return 0;
  }
  cin.get();
}
