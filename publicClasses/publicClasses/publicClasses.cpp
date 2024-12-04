#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    // Task 1: Define a Name property of type string
    string Name;

    // Override the ToString() method
    string ToString() {
        // Expected Output:
        // Hello! My name is [Name]
        return "Hello! My name is " + Name;
    }
};

void task1() {
    // Task 1: Create a C++ program that requests three names of people
    // Store them in an array of Person objects
    // Input:
    // Juan
    // Sara
    // Carlos
    // Output:
    // Hello! My name is Juan
    // Hello! My name is Sara
    // Hello! My name is Carlos
    Person people[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter name " << i + 1 << ": ";
        cin >> people[i].Name;
    }

    for (int i = 0; i < 3; i++) {
        cout << people[i].ToString() << endl;
    }
}

class PersonWithConstructor {
public:
    // Task 2: Define a Name property of type string
    string Name;

    // Constructor that receives the name as a parameter
    PersonWithConstructor(string name) {
        // Initialize the Name property
        Name = name;
    }

    // Destructor that assigns the name to empty
    ~PersonWithConstructor() {
        // Set Name to an empty string
        Name = "";
    }

    // Override the ToString() method
    string ToString() {
        // Expected Output:
        // Hello! My name is [Name]
        return "Hello! My name is " + Name;
    }
};

void task2() {
    // Task 2: Create a C++ program that prompts the user for three names of people
    // Store them in an array of PersonWithConstructor objects
    // Input:
    // Juan
    // Sara
    // Carlos
    // Output:
    // Hello! My name is Juan
    // Hello! My name is Sara
    // Hello! My name is Carlos
    PersonWithConstructor people[3] = {
        PersonWithConstructor("Juan"),
        PersonWithConstructor("Sara"),
        PersonWithConstructor("Carlos")
    };

    for (int i = 0; i < 3; i++) {
        cout << people[i].ToString() << endl;
    }
}

int Addition(int number) {
    // Create a C++ method/function that takes a user-entered number as an argument,
    // increments the number by +1, and returns the result.
    // Example:
    // Addition(0) ➞ 1
    // Addition(9) ➞ 10
    // Addition(-3) ➞ -2
    return number + 1;
}

int main() {
    // Call the tasks here
    cout << endl;
    task1();
    cout << endl;
    task2();
    cout << endl;

    // Test the Addition function
    cout << "Addition(0) -> " << Addition(0) << endl;
    cout << "Addition(9) -> " << Addition(9) << endl;
    cout << "Addition(-3) -> " << Addition(-3) << endl;

    return 0;
}
