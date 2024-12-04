#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Task 1: Print Numbers 1 to 10
    int no = 1;
    do {
        cout << no << " ";
        no++;

    } while (no < 11);
    cout << endl;

     // Task 2: Calculate the Sum of Even Numbers from 1 to 20
    int sum = 0;
    int no1 = 2;
    do {

        if (no1 % 2 == 0)
            sum += no1;
        no1++;
        

    } while (no1 <= 20);
    cout << sum << endl;


    // Task 3: Reverse a String

    string str = "Hello";
    reverse(str.begin(), str.end());
    cout << str << endl;


    // Task 4: Print a Triangle of Stars
    // Hint:
    cout << "   * " << endl << "  * * " << endl << " * * * ";

    return 0;
}

