#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

    double result;

    switch (op) {
        case '+':
            
            break;
        case '-':
           
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            // if (num2 == 0) {
            //     cout << "Error: Division by zero is not allowed." << endl;
            // } else {
            //     result = num1 / num2;
            //     cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            // }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            break;
    }

    return 0;
}