#include <iostream>

using namespace std;

class MyNumber {
private:
    int value;

public:
    MyNumber(int val){
    value=val;
}

    friend void display(MyNumber& num);
};

void display(MyNumber& num) {
    cout << "Value: " << num.value << endl;
}

int main() {
    MyNumber num(42);
    display(num);
    return 0;
}

//output

Value: 42
