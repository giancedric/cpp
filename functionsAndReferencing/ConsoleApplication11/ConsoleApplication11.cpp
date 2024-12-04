#include <iostream>
#include <string>
using namespace std;

void task1() {
    cout << "Welcome EVIT Friends!" << endl << "Have a nice Tuesday!" << endl;
}

void task2(string name) {


    cout << "Welcome friend, " << name << "!" << endl << "Have a nice holiday!" << endl;
    // Task 2: Create a user-defined method with parameters
    // Test Data:
    // Please input a name: John
    // Expected Output:
    // Welcome friend John!
    // Have a nice holiday!
}

int countSpaces(const string& inputString) {
        int spaceCount = 0;

        // Count spaces
        for (char ch : inputString) {
            if (ch == ' ') {
                spaceCount++;
            }
        }

        // Print result
        cout << "\"" << inputString << "\"" << " contains " << spaceCount << " spaces." << endl;

        return spaceCount; // Return the count

    
}

void swapNumbers(int& num1, int& num2) {

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "Now the first number is: " << num1 << ", and the 2nd number is: " << num2;
    // Task 4: Create a method to swap two integer numbers
    // Test Data:
    // Enter a number: 5
    // Enter another number: 6
    // Expected Output:
    // Now the 1st number is: 6, and the 2nd number is: 5
}

int main() {
    //task1

    task1();
    cout << endl;

    //task2

    string name;
    cout << "Enter a name: ";
    cin >> name;
    
    task2(name);
    cout << endl;

    //task3
    cout << "Enter a string: ";
    cin.ignore();
    string strin;
    getline(cin, strin);
    
    countSpaces(strin);
    cout << endl;

    //task4
    int a, b;

    
    cout << "Enter the first number: ";
    
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << endl;

    cout << "Before swapping: first number = " << a
        << ", second number = " << b << endl << endl;

    
    swapNumbers(a, b);
    cout << endl;
    return 0;
}

