#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

    int result;

    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            if(num1>0 && num1%2==0 && num2>0 && num2%2==0 && result>0 && result%2==0){
                cout<<"(Even ; Positive)"<<op<<"(Even ; Positive) = (Even; Positive;)\n";
            }
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            if(num1>0 && num1%2==0 && num2>0 && num2%2==0 && result>0 && result%2==0){
                cout<<"(Even ; Positive)"<<op<<"(Even ; Positive) = (Even; Positive;)\n";
            }
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            if(num1>0 && num1%2==0 && num2>0 && num2%2==0 && result>0 && result%2==0){
                cout<<"(Even ; Positive)"<<op<<"(Even ; Positive) = (Even; Positive;)\n";
            }
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                if(num1>0 && num1%2==0 && num2>0 && num2%2==0 && result>0 && result%2==0){
                    cout<<"(Even ; Positive)"<<op<<"(Even ; Positive) = (Even; Positive;)\n";
                }
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            break;
    }

    
    return 0;
}