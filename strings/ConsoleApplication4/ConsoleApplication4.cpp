#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>


using namespace std;

int main() {
    // Task 1: Concatenate Strings
    string firstName = "John ";
    string lastName = "Doe";
    cout << firstName.append(lastName) << "\n";

    // Combine the 'firstName' and 'lastName' to create a full name.
    // Print the full name to the console.
    // Hint: Use string concatenation.


    // Task 2: Uppercase and Lowercase
    string text = "This is a sample text.";
    string textUppercase = text;
    transform(textUppercase.begin(), textUppercase.end(), textUppercase.begin(), ::toupper);
    cout << textUppercase << "\n";

    string textLowercase = text;
    transform(textLowercase.begin(), textLowercase.end(), textLowercase.begin(), ::tolower);
    cout << textLowercase << "\n";

    // Convert 'text' to uppercase and store it in a new variable.
    // Convert 'text' to lowercase and store it in another new variable.
    // Print both the uppercase and lowercase versions.


    // Task 3: Substring
    string sentence = "The quick brown fox jumps over the lazy dog.";
    vector<string> words; //vector for the sentence
    istringstream stream(sentence); //splits the sentence with spaces
    string word; //stores the extracted word

    while (stream >> word) { // while there is words left to extract, push.back into words(vector)
        words.push_back(word);
    }
   
    cout << words[2] << "\n";
  


    // Extract the word "brown" from 'sentence' and store it in a new variable.
    // Print the extracted word.


    // Task 4: Replace
    string originalString = "C++ is a popular programming language.";

    vector<string> newString;
    istringstream streams(originalString);
    string wordz;

    while (streams >> wordz) {
        newString.push_back(wordz);
    }

    newString[0] = "CPlusPlus";

    for (const string& word : newString) {
        cout << word << " ";
    }


    // Replace "C++" with "CPlusPlus" in 'originalString'.
    // Print the modified string.


    // Task 5: String Length
    string someText = "This is a random piece of text.";
    cout << "\n" << someText.size();

    // Calculate and print the length (number of characters) of 'someText'.

    return 0;
}