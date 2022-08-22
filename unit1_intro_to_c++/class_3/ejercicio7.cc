#include <iostream>
using namespace std;

int main() {
    string s = "Hello World 123";
    int i = 0;
    while (i < s.length()) {
        if(isdigit(s[i])) {
            cout << s[i] << " is a digit" << endl;
        } else {
            cout << s[i] << " is not a digit" << endl;
        }
        i++;
    }
    return 0;
}