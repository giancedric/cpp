#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   // Task 1: Separate odd and even integers into separate arrays
    vector<int> even;
    vector<int> odd;
    int elements;
    int element = 1;
    int organize;



    cout << "Input the number of elements to be stored in the array: \n";
    cin >> elements;

    while (elements > (element)-1) {

        cout << "Input an element: " << endl;
        cout << "element " << element << ": ";
        cin >> organize;
        if (organize % 2 == 0) {

            even.push_back(organize);
            element++;

        }
        else if (organize % 2 >= 1) {
            odd.push_back(organize);
            element++;
        }

    }
    cout << "Even numbers: ";
    for (int i = 0; i < even.size(); i++) {
        cout << even[i] << " ";
    }
    cout << endl;

    cout << "Odd numbers: ";
    for (int i = 0; i < odd.size(); i++) {
        cout << odd[i] << " ";
    }
    cout << endl;

    


    // Test Data:
    // Input the number of elements to be stored in the array: 5
    // Input 5 elements in the array:
    // element - 0 : 25
    // element - 1 : 47
    // element - 2 : 42
    // element - 3 : 56
    // element - 4 : 32

    // Expected Output:
    // The Even elements are: 42 56 32
    // The Odd elements are: 25 47


    // Task 2: Insert an additional value into a sorted array

    int arraySize;
    cout << "Input array size: ";
    cin >> arraySize;
    vector<int> array;
    int elemen;
    while (array.size() < arraySize) {
        cout << "Input an element: " << endl;
        cin >> elemen;
        array.push_back(elemen);

    }

    cout << "Initial array elements: ";

    for (int j = 0; j < array.size(); j++) {
        cout << array[j] << " ";
    }
    cout << endl;


    while (array.size() == arraySize) {
        cout << "Input an added element: " << endl;
        cin >> elemen;
        array.push_back(elemen);

    }

    cout << "After insert array elements: ";

    for (int j = 0; j < array.size(); j++) {
        cout << array[j] << " ";
    }


    


    // Test Data:
    // Input the size of array: 3
    // Input 3 elements in the array in ascending order:
    // element - 0 : 5
    // element - 1 : 7
    // element - 2 : 9
    // Input the value to be inserted: 8

    // Expected Output:
    // The existing array list is: 5 7 9
    // After Insert the list is: 5 7 8 9


    // Task 3: Delete an element at a desired position from an array

    int arrayDelete3;
    cout << "Input array size: ";
    vector<int> arrayDelete;
    cin >> arrayDelete3;
    
    int elementz;
    while (arrayDelete.size() < arrayDelete3) {
        cout << "Input an element in ascending order: " << endl;
        cin >> elementz;
        arrayDelete.push_back(elementz);

    }

    cout << "Initial array elements: ";

    for (int j = 0; j < arrayDelete.size(); j++) {
        cout << arrayDelete[j] << " ";
    }
    cout << endl;

    cout << "What is the position of the element you would like to delete?: (1~) ";
    int deletes;
    cin >> deletes;

    arrayDelete.erase(arrayDelete.begin() + deletes);

    for (int j = 0; j < arrayDelete.size(); j++) {
        cout << arrayDelete[j] << " ";
    }
    cout << endl;

    // Test Data:
    // Input the size of array: 5
    // Input 5 elements in the array in ascending order:
    // element - 0 : 1
    // element - 1 : 2
    // element - 2 : 3
    // element - 3 : 4
    // element - 4 : 5
    // Input the position where to delete: 3

    // Expected Output:
    // The new list is: 1 2 4 5


    // Task 4: Find the second smallest element in an array
    int arraySmallSize;
    vector<int> smallest;
    cout << "Input array size: ";
    cin >> arraySmallSize;

    int elementSmall;
    while (smallest.size() < arraySmallSize) {
        cout << "Input an element: " << endl;
        cin >> elementSmall;
        smallest.push_back(elementSmall);

    }

    sort(smallest.begin(), smallest.end());

    cout << "The Second smallest element in the array is: " << smallest[1];

    


    // Test Data:
    // Input the size of array: 5
    // Input 5 elements in the array (value must be <9999):
    // element - 0 : 0
    // element - 1 : 9
    // element - 2 : 4
    // element - 3 : 6
    // element - 4 : 5

    // Expected Output:
    // The Second smallest element in the array is: 4


    // Task 5: Add two matrices of the same size

    int size;
    const int MAX_SIZE = 5;
    
    // Input the size of the matrix
    cout << "Input the size of the square matrix (less than 5): ";
    cin >> size;

    

    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], sum[MAX_SIZE][MAX_SIZE];

    // Input elements in the first matrix
    cout << "Input elements in the first matrix:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "element - [" << i << "],[" << j << "] : ";
            cin >> matrix1[i][j];
        }
    }

    // Input elements in the second matrix
    cout << "Input elements in the second matrix:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "element - [" << i << "],[" << j << "] : ";
            cin >> matrix2[i][j];
        }
    }

    // Compute the sum of the two matrices
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the first matrix
    cout << "The First matrix is:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    // Print the second matrix
    cout << "The Second matrix is:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    // Print the sum of the matrices
    cout << "The Addition of two matrices is:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    // Test Data:
    // Input the size of the square matrix (less than 5): 2
    // Input elements in the first matrix:
    // element - [0],[0] : 1
    // element - [0],[1] : 2
    // element - [1],[0] : 3
    // element - [1],[1] : 4

    // Input elements in the second matrix:
    // element - [0],[0] : 5
    // element - [0],[1] : 6
    // element - [1],[0] : 7
    // element - [1],[1] : 8

    // Expected Output:
    // The First matrix is:
    // 1 2
    // 3 4
    // The Second matrix is:
    // 5 6
    // 7 8
    // The Addition of two matrices is:
    // 6 8
    // 10 12

    return 0;
}