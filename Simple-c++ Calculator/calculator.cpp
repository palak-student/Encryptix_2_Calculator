#include <iostream>
using namespace std;

int main() {
    char operatorChoice;
    float number1, number2;

    cout << "Choose an operator (+, -, *, /): ";
    cin >> operatorChoice;

    cout << "Enter two numbers separated by space: ";
    cin >> number1 >> number2;

    switch (operatorChoice) {
        case '+':
            cout << number1 << " + " << number2 << " = " << (number1 + number2);
            break;

        case '-':
            cout << number1 << " - " << number2 << " = " << (number1 - number2);
            break;

        case '*':
            cout << number1 << " * " << number2 << " = " << (number1 * number2);
            break;

        case '/':
            if (number2 != 0)
                cout << number1 << " / " << number2 << " = " << (number1 / number2);
            else
                cout << "Error: Division by zero is not allowed";
            break;

        default:
            cout << "Error! Invalid operator entered.";
            break;
    }

    return 0;
}
