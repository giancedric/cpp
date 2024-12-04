#include <iostream>
using namespace std;

// Task 1: Class Person, Student, and Teacher
class Person {
public:
    // Public methods

    void Greet() {
        cout << "Hello!" << endl;
    }

    void SetAge(int age) {
        this->age = age;
    }
protected:
    int age;
};

class Student : public Person {
public:
    void Study() {
        cout << "I'm studying!" << endl;
    }
    void ShowAge() {
        cout << "My age is " << age << " years old." << endl;
    }
};

class Teacher : public Person {
public:
    void Explain() {
        cout << "I'm explaining something!" << endl;
    }
};

// Task 2: PhotoBook class
class PhotoBook {
private:
    int numPages;

public:
    // Default constructor
    PhotoBook() : numPages(16) {}

    // Constructor with specified number of pages
    PhotoBook(int pages) : numPages(pages) {}

    // Method to get the number of pages
    int GetNumberPages() {
        return numPages;
    }
};

class BigPhotoBook : public PhotoBook {
public:
    // Constructor for big photo book
    BigPhotoBook() : PhotoBook(64) {}
};

// PhotoBookTest class for testing
class PhotoBookTest {
public:
    void Test() {
        PhotoBook defaultBook;
        cout << "Default PhotoBook pages: " << defaultBook.GetNumberPages() << endl;

        PhotoBook customBook(24);
        cout << "Custom PhotoBook pages: " << customBook.GetNumberPages() << endl;

        BigPhotoBook bigBook;
        cout << "Big PhotoBook pages: " << bigBook.GetNumberPages() << endl;
    }
};

// Circuit Resistance Calculator
int CircuitPower(int voltage, int current) {
    return voltage * current;
}

int main() {
    cout << "Task 1: Testing Person, Student, and Teacher Classes" << endl;
    Student student;
    student.SetAge(20);
    student.Greet();
    student.ShowAge();
    student.Study();

    Teacher teacher;
    teacher.SetAge(40);
    teacher.Greet();
    teacher.Explain();

    cout << endl;

    cout << "Task 2: Testing PhotoBook Classes" << endl;
    PhotoBookTest photoBookTest;
    photoBookTest.Test();

    cout << endl;

    cout << "Task 3: Testing Circuit Resistance Calculator" << endl;
    int voltage = 220;
    int current = 5;
    cout << "Circuit power with voltage " << voltage << "V and current " << current << "A is: "
        << CircuitPower(voltage, current) << "W" << endl;
    return 0;
}