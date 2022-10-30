//
// Created by shankyjs on 10/16/22.
//

#ifndef TAREA_11_PET_H
#define TAREA_11_PET_H
#include <iostream>

using namespace std;

class pet {
private:
    string name;
    string breed;
    double weightKg;
public:
    pet();
    pet(string name, string breed, double weightKg);
    void printDetailsPet() {
        std::cout << "Pet name: " << name << std::endl;
        std::cout << "Breed: " << breed << std::endl;
        std::cout << "Weight in Kilograms: " << weightKg << std::endl;
    };
};

pet::pet() {
    name = "Kaiser";
    breed = "Terrieraguacaterrier";
    weightKg = 9.52;
};

pet::pet(string name, string breed, double weightKg) {
    this->name = name;
    this->breed = breed;
    this->weightKg = weightKg;
}

#endif //TAREA_11_PET_H
