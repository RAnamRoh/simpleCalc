#include <iostream>
#include <cmath> 
//// calculator program 

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
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
           
            break;
        case '-':
>>>>>>>>> Temporary merge branch 2

            break;
        case '*':
         
            break;
        case '/':
<<<<<<<<< Temporary merge branch 1

            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            }
     
            // if (num2 == 0) {
            //     cout << "Error: Division by zero is not allowed." << endl;
            // } else {
            //     result = num1 / num2;
            //     cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            // }
=========
     

     
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            break;
    }

    return 0;
}