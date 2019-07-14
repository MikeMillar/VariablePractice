#include <iostream>

using namespace std;

int main() {
	
	int numCats = 5;
	cout << "Number of cats: " << numCats << endl;

	int numDogs = 7;
	cout << "Number of dogs: " << numDogs << endl;

	int numAnimals = numCats + numDogs;
	cout << "Total number of animals: " << numAnimals << endl;

	cout << "New dog acquired!" << endl;
	numDogs = numDogs + 1;
	cout << "New number of dogs: " << numDogs << endl;




	return 0;
}