#include <iostream>
#include <string>

using namespace std;

int main() {
    string adjective, animal, name, name2, verb, place, pluralNoun, verb2, name3, verb3, adjective2, animal2, emotion, pluralNoun2, noun, name4, verb4, adjective3, noun2, pluralNoun3, adjective4;

    cout << "Enter an adjective: ";
    cin >> adjective;

    cout << "Enter an animal: ";
    cin >> animal;

    cout << "Enter a name: ";
    cin >> name;

    cout << "Enter another adjective: ";
    cin >> adjective2;

    cout << "Enter a verb: ";
    cin >> verb;

    cout << "Enter a place: ";
    cin >> place;

    cout << "Enter a plural noun: ";
    cin >> pluralNoun;

    cout << "Enter another verb: ";
    cin >> verb2;

    cout << "Enter another name: ";
    cin >> name3;

    cout << "Enter another verb: ";
    cin >> verb3;

    cout << "Enter another adjective: ";
    cin >> adjective3;

    cout << "Enter another animal: ";
    cin >> animal2;

    cout << "Enter an emotion: ";
    cin >> emotion;

    cout << "Enter another plural noun: ";
    cin >> pluralNoun2;

    cout << "Enter a noun: ";
    cin >> noun;

    cout << "Enter another name: ";
    cin >> name4;

    cout << "Enter another verb: ";
    cin >> verb4;

    cout << "Enter another adjective: ";
    cin >> adjective4;

    cout << "Enter another noun: ";
    cin >> noun2;

    cout << "Enter another plural noun: ";
    cin >> pluralNoun3;

    cout << "Enter another adjective: ";
    cin >> adjective4;

    cout << "\nYour MadLib: Once upon a time, there was a(n) " << adjective << " " << animal << " named " << name << ". "
        << "Every day, " << name << " would " << verb << " through the " << place << ", looking for " << pluralNoun << " to " << verb2 << ". "
        << "One day, " << name << " found a " << adjective2 << " " << noun << " that looked like it might be a " << adjective3 << " treasure. "
        << "Excited, " << name << " decided to " << verb3 << " it back home. Along the way, they ran into a " << adjective3 << " " << animal2 << " who was very " << emotion << ". "
        << "The animal said, “I am searching for " << pluralNoun2 << ". Will you help me?" " After a long " << noun << ", "
        << name << " and the animal decided to " << verb4 << " together. They found the " << adjective4 << " " << noun2 << ", "
        << "and it turned out to be full of " << pluralNoun3 << "! They both laughed and agreed that it had been the most " << adjective4 << " adventure of their lives.\n";

    return 0;
}
