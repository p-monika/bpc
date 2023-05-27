#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            cout << "Invalid operator";
            return 0;
    }

    cout << num1 << " " << op << " " << num2 << " = " << result;

    return 0;
}

//output
Enter operator (+, -, *, /): +
Enter first number: 2
Enter second number: 3
2 + 3 = 5
