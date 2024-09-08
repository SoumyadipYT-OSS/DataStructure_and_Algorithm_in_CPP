// array.back() returns an iterator just past this element, this function returns a direct reference
#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 3> myArray = { 5, 19, 77 };
	cout << "back is: " << myArray.back() << endl;
	myArray.back() = 50;

	cout << "myArray now contains: " << endl;
	for (int& x : myArray)
		cout << ' ' << x;

	cout << endl;
	return 0;
}
