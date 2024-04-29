#include <iostream>
#include <cmath>
using namespace std;

string getParity(double num) {
    if (fmod(num, 2) == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}

string getSign(double num) {
    if (num >= 0) {
        return "Positive";
    } else {
        return "Negative";
    }
}

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
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            cout << "(" << getParity(num1) << "; " << getSign(num1) << ";) + (" << getParity(num2) << "; " << getSign(num2) << ";) = (" << getParity(result) << "; " << getSign(result) << ";)" << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            cout << "(" << getParity(num1) << "; " << getSign(num1) << ";) - (" << getParity(num2) << "; " << getSign(num2) << ";) = (" << getParity(result) << "; " << getSign(result) << ";)" << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            cout << "(" << getParity(num1) << "; " << getSign(num1) << ";) * (" << getParity(num2) << "; " << getSign(num2) << ";) = (" << getParity(result) << "; " << getSign(result) << ";)" << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
                cout << "(" << getParity(num1) << "; " << getSign(num1) << ";) / (" << getParity(num2) << "; " << getSign(num2) << ";) = (" << getParity(result) << "; " << getSign(result) << ";)" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            break;
    }

    return 0;
}