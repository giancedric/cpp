#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip> // for std::setprecision

using namespace std;

// Task 1: Inheritance of objects
class Person {
protected:
    string name;

public:
    // Constructor
    Person(string name) : name(name) {};

    // Method to get name
    string GetName() const { return name; }

    // Method to convert to string (toString equivalent)
    virtual string ToString() const { return "Name is " + name; }
};

class Student : public Person {
public:
    // Constructor
    Student(string name) : Person(name) {}

    // Method to study
    void Study() { cout << name << " is studying." << endl; }
};

class Teacher : public Person {
public:
    // Constructor
    Teacher(string name) : Person(name) {}

    // Method to explain
    void Explain() {
        cout << name << " is teaching." << endl;
    }
};

// Task 2: Abstract classes
class Animal {
protected:
    string name;

public:
    // Method to set name
    void SetName(string name) { this->name = name; }

    // Method to get name
    string GetName() const {
        return name + " is the animal's name";
    }

    // Abstract method to eat
    virtual void Eat() = 0;
};

class Dog : public Animal {   
public:
    // Method to eat
    void Eat() override {
        cout << name << " is eating food." << endl;
    }
};

// Smoothie class
class Smoothie 
{
private:
    vector<string> ingredients;

public:
    // Constructor
    Smoothie(vector<string> ingredients) : ingredients(ingredients) {}


    // Method to get cost
    string GetCost() const 
    {
        double cost = ingredients.size() * 0.5;
        return "$" + to_string(cost);
    }

    // Method to get price
    string GetPrice() const 
    {
        double cost = ingredients.size() * 1.5;
        return "$" + to_string(cost);
    }

    // Method to get name
    string GetName() const 
    {
        string smoothieName;
        for (const auto& ingredient : ingredients) {
            smoothieName += ingredient + " ";
        }
        smoothieName += "Smoothie";
        return smoothieName;
    }
};

int main() {
    // Testing Person, Student, Teacher
    Student s("John");
    Teacher t("Dr. Smith");

    cout << s.ToString() << endl;
    s.Study();

    cout << t.ToString() << endl;
    t.Explain();

    // Testing Animal and Dog
    Dog d;
    d.SetName("Buddy");
    cout << d.GetName() << endl;
    d.Eat();

    // Testing Smoothie
    vector<string> ingredients = { "Banana", "Strawberry", "Milk" };
    Smoothie smoothie(ingredients);

    cout << "Smoothie Name: " << smoothie.GetName() << endl;
    cout << "Cost: " << smoothie.GetCost() << endl;
    cout << "Price: " << smoothie.GetPrice() << endl;

    return 0;


}