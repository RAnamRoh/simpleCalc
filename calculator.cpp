#include <iostream>
#include <cmath> 
//// calculator program 

using namespace std;

int subtractTwoNum(int num1, int num2){
    int ans = num1 = num2;
    return ans;
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
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            double ans = subtractTwoNum(num1, num2);
            cout<<"Result: "<<ans<<endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result is : " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            double ans;
            if(num2>0) ans =  num1 / num2;
            else ans = 0;
            cout<<"Result: "<<ans<<endl;
            /// fixed the problem
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            break;
    }

    return 0;
}