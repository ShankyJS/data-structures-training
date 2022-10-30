#include <iostream>

using namespace std;

class Poligon {
protected:
    int width, height;
public:
    void setValues(int a, int b) {
        width = a;
        height = b;
    };
};

class Rectangle: public Poligon {
public:
    int area () {
        return width * height;
    }
};

class Triangle: public Poligon {
public:
    int area() {
        return width * height / 2;
    }
};


int main() {
    Rectangle rect;
    Triangle triangle;
    rect.setValues(4, 5);
    triangle.setValues(5, 4);
    std::cout << rect.area() << std::endl;
    std::cout << triangle.area() << std::endl;
    return 0;
}
