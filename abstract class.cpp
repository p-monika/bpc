#include <iostream>

class Shape {
public:
    virtual void draw() = 0; 

    void setColor(std::string color) {
        this->color = color;
    }

protected:
    std::string color;
};


class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle with color: " << color << std::endl;
    }
};


class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a square with color: " << color << std::endl;
    }
};

int main() {
    
    Circle circle;
    Square* square = new Square();

    circle.setColor("Red");
    square->setColor("Blue");

    circle.draw();
    square->draw(); 

    
    delete square;

    return 0;
}

//output
Drawing a circle with color: Red
Drawing a square with color: Blue
