#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Input 2 numbers seperated by a space: ";
    cin >> num1 >> num2;
    cout << "The value of num1 is " << num1 << "\n" << "The value of num2 is " << num2 << "\n";
    cout << "Addition: num1 + num2 = " << num1 + num2 << "\n";
    cout << "Subtraction: num1 + num2 = " << num2 - num1 << "\n";
    cout << "Multiplication: num1 * num2 = " << num1 * num2 << "\n";
    if (num1 == 0 || num2 == 0) {
        cout << "Divison by zero is not allowed" << "\n";
    }
    else {
        cout << "Division: num1 / num2 = " << num1 / num2 << "\n";
    }
    cout << "Remainder: num1 % num2 = " << num1 % num2 << "\n";
    cout << "Average: (num1 + num2) / 2 = " << (num1 + num2) / 2 << "\n";
    cout << "Square of num1: num1^2 = " << num1*num1 << "\n";
    cout << "Square root of num2: √num2 = " << sqrt(num2) << "\n";

}

