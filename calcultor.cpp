#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the first operand: ";
    cin >> num1;

    cout << "Enter the second operand: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
    }

    return 0;
}