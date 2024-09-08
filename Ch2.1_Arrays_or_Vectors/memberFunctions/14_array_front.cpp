// front(): Returns a reference to the first element in the array container.

/*
	Unlike member array::begin, which returns an iterator to this same element, 
	this function returns a direct reference.
*/

#include <iostream>
#include <array>

using namespace std;


int main() {
	array<int, 3> myArr = { 2, 16, 77 };

	cout << "front is: " << myArr.front() << endl;
	cout << "back is: " << myArr.back() << endl;

	myArr.front() = 100;

	cout << "myarray now contains: ";
	for (int& x : myArr)
		cout << ' ' << x;

	cout << endl;

	return 0;
}
