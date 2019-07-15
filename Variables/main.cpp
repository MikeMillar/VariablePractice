#include <iostream>
#include <limits> // Allows us to see max size of variables
#include <iomanip> // Allows us to control cout with numbers, either in normal or scientific

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

	cout << "Max int value: " << INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl;

	long int lValue = 23456465;
	cout << lValue << endl;

	short int sValue = 23434;
	cout << sValue << endl;

	unsigned int uValue = 32345;
	cout << uValue << endl;

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of long int: " << sizeof(long int) << endl;
	cout << "Size of short int: " << sizeof(short int) << endl;
	cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;

	// Floating Point Types
	float fValue = 123.456789;
	cout << setprecision(20) << fixed << fValue << endl; // fixed/scientific are interchangable -- setprecicision determines how many digits to display
	cout << "Size of float: " << sizeof(float) << endl;

	double dValue = 123.456789;
	cout << setprecision(20) << fixed << dValue << endl; // fixed/scientific are interchangable -- setprecicision determines how many digits to display
	cout << "Size of double: " << sizeof(double) << endl;

	long double ldValue = 123.456789876543210;
	cout << setprecision(20) << fixed << ldValue << endl; // fixed/scientific are interchangable -- setprecicision determines how many digits to display
	cout << "Size of long double: " << sizeof(long double) << endl;


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