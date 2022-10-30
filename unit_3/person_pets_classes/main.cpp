#include <iostream>
#include "pet.h"

using namespace std;

class Person {

private:
    string name;
    string last_name;
    int age{};

public:
    Person();

    Person(string name, string last_name, int age);

    void waveUser() {
        std::cout << "Hello " << name << " " << last_name << std::endl;
    };

    bool isUnderAge() {
        if (age < 19) {
            return true;
        } else {
            return false;
        }
    };

    void canGoToParty() {
        if (!isUnderAge()) {
            std::cout << "Welcome to the party 🎉 " << name << " " << last_name << std::endl;
        } else {
            std::cout << "Sorry you can't come to the party 😥 " << name << " " << last_name << std::endl;
        }
    }
};

// Default constructor, dummy values for user
Person::Person() {
    name = "John";
    last_name = "Doe";
    age = 18;
}

// Parametrized constructor, values are assigned by initialization attributes.
Person::Person(string name, string last_name, int age) {
    this->name = name;
    this->last_name = last_name;
    this->age = age;
}

int main() {
    Person john;
//    Person sampy = ("Sampy", "Sampy", 23); // Assignation form
    Person jhan ("Jhan`", "Silva", 20); // Functional form
    Person juan {"juan", "silva", 23}; // Uniform initialization
    Person gandy = {"Pod", "Like", 23}; // POD-like (old)
    jhan.waveUser();
    john.waveUser();
    jhan.canGoToParty();
    john.canGoToParty();
    pet jax("Jax", "Dachshund", 3.4);
    jax.printDetailsPet();
    pet kaiser;
    kaiser.printDetailsPet();
    return 0;
}