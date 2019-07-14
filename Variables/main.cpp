#include <iostream>

using namespace std;

int main() {
	// Integers
	int numCats = 5;
	cout << "Number of cats: " << numCats << endl;

	int numDogs = 7;
	cout << "Number of dogs: " << numDogs << endl;

	int numAnimals = numCats + numDogs;
	cout << "Total number of animals: " << numAnimals << endl;

	cout << "New dog acquired!" << endl;
	numDogs = numDogs + 1;
	cout << "New number of dogs: " << numDogs << endl;

	// Strings
	string text1 = "Hello ";
	string text2 = "Fred";
	string text3 = text1 + text2;
	cout << text3 << endl;

	// User Input
	string text4 = "Hello";
	string input;
	cout << text4 << endl;

	cout << "Enter your name: " << flush;
	cin >> input;
	cout << "String you entered: " << input << endl;

	cout << "Enter your age: ";
	int value;
	cin >> value;
	cout << "You entered: " << value << endl;





	return 0;
}