// returns a reference to the first element, this function returns a random access iterator pointing to it.

#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 5> myArray = { 2, 16, 77, 34, 50 };
	cout << "myarray contains: ";
	for (auto it = myArray.begin(); it != myArray.end(); ++it)
		cout << ' ' << *it;
	cout << endl;

	return 0;
}
