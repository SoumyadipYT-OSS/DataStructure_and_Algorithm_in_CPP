// end(): Returns an iterator pointing to the past-the-end element in the array container.

/*
	The past-the-end element is the theoretical element that would follow the last element in the array. 
	It does not point to any element, and thus shall not be dereferenced.
*/

#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 5> myArr = { 5, 19, 77, 34, 99 };
	cout << "myArray contains: ";
	for (auto it = myArr.begin(); it != myArr.end(); ++it) {
		cout << ' ' << *it;
	}
	cout << endl;

	return 0;
}
