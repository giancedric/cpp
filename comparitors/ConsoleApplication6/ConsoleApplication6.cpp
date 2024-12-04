#include <iostream>
using namespace std;

int main() {
    // Task 1: Check for Even or Odd
    int number1 = 15;

    if (number1 % 2 == 0) {
        cout << "The number is even";
    }
    else {
        cout << "The number is odd" << "\n";
    }

    // Use an if statement to check if 'number1' is even or odd.
    // Print a message indicating whether it's even or odd.


    // Task 2: Check for a Leap Year
    int year = 2024;
    if (year%4==0 and year % 100 != 0 || year % 400 == 0){
        cout << "Year is a leap year" << endl;
    }
    else {
        cout << "Year is not a leap year" << endl;
    }

    // Use an if statement to check if 'year' is a leap year.
    // Print a message indicating whether it's a leap year or not.


    // Task 3: Determine the Largest Number
    int num1 = 25;
    int num2 = 30;

    if (num1 > num2) {
        cout << "num1 is larger than num2";
    }
    else {
        cout << "num2 is larger than num1" << endl;
    }

    // Use an if statement to determine which of 'num1' and 'num2' is larger.
    // Print the largest number.


    // Task 4: Check for Eligibility
    int age = 17;
    bool isStudent = true;

    if (age < 18) {
        cout << "Eligible";
    }
    else {
        cout << "Uneligible";
    }

    // Use an if statement to check if a person is eligible for a student discount.
    // A person is eligible if their age is less than 18 and they are a student.
    // Print whether the person is eligible or not.

    return 0;
}