#include <iostream>


class Vehicle {
public:
    void move() {
        std::cout << "Vehicle moves!" << std::endl;
    }
};


class Weapon {
public:
    void fire() {
        std::cout << "Weapon fires!" << std::endl;
    }
};

class Tank : public Vehicle, public Weapon {
public:
    void attack() {
        std::cout << "Tank attacks!" << std::endl;
    }
};

int main() {

    Tank tank;


    tank.move();
    tank.fire();
    tank.attack();

    return 0;
}

//output
Vehicle moves!
Weapon fires!
Tank attacks!
