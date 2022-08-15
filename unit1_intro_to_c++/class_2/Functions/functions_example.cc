#include <iostream>

using namespace std;

std::string getUsername();
void waveUser(std::string username);

int main()
{
    std::string username;
    username = getUsername();
    waveUser(username);
}

std::string getUsername()
{
    std::string username;
    std::cout << "Please insert your username: ";
    std::cin >> username;
    return username;
}

void waveUser(std::string username)
{
    std::cout << "Hello " << username << " welcome!" << endl;
}
