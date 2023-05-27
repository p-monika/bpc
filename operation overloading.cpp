#include <iostream>

class MyNumber {
public:
    int value;

    MyNumber(int val) : value(val) {}


    MyNumber operator-(const MyNumber& other) {
        return MyNumber(value - other.value);
    }
};

int main() {
    MyNumber num1(10);
    MyNumber num2(5);
    MyNumber difference = num1 - num2;
    std::cout << "Difference: " << difference.value << std::endl;

    return 0;
}

//output
Difference: 5
