// rbegin(): reverse_iterator rbegin() noexcept;const_reverse_iterator rbegin() const noexcept;

/*
	Returns a reverse iterator pointing to the last element in the array container.

	rbegin points to the element right before the one that would be pointed to by member end.

	Notice that unlike member array::back, which returns a reference to this same element, 
	this function returns a reverse random access iterator.
*/

#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 4> myArr = { 4, 26, 80, 14 };

	cout << "myArray contains: ";
	for (auto rit = myArr.rbegin(); rit < myArr.rend(); ++rit)
		cout << ' ' << *rit;
	cout << endl;

	return 0;
}
