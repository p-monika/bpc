#include <iostream>


class Shape {
public:
    void draw() {
        std::cout << "Drawing a shape" << std::endl;
    }
};


class Rectangle : public Shape {
public:
    void draw() {
        std::cout << "Drawing a rectangle" << std::endl;
    }
};


class Square : public Rectangle {
public:
    void draw() {
        std::cout << "Drawing a square" << std::endl;
    }
};

int main() {

    Square square;


    square.draw();


    square.Rectangle::draw();


    square.Shape::draw();

    return 0;
}

//output
Drawing a square
Drawing a rectangle
Drawing a shape
