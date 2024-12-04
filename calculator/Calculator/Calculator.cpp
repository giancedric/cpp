#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    string operation;
    double num1, num2;

    //getiing input

    cout << "Input a number seperated by spaces: ";
    cin >> num1 >> num2;
    cout << "Input an operator: (+, -, /, *) ";
    cin >> operation;

    // if else input validation

    if (operation == "+") {
        cout << num1 + num2;
    }
    else if (operation == "-") {
        cout << num1 - num2;
    }
    else if (operation == "*") {
        cout << num1 * num2;
    }
    else if (operation == "/") {
        cout << num1 / num2;
    }
    else {
        cout << "Not a recognizable operator!";
    }



}
