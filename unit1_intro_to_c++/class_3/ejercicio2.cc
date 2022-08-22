#include <iostream>

using namespace std;

int main() {
  char start = 'a';
  char end = 'z';
  while(start-1 < end) {
    std::cout << start << endl;
    start++;
  }
  return 0;
}
