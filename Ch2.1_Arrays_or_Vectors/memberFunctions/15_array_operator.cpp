// operator[]: reference operator[] (size_type n);const_reference operator[] (size_type n) const;

/*
	• Access element
	Returns a reference to the element at position n in the array container.

	A similar member function, array::at, has the same behavior as this operator 
	function, except that array::at checks the array bounds and signals whether n is out 
	of range by throwing an exception.
*/


#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 10> myArr;
	unsigned int i;

	for (int i = 0; i < 10; i++) myArr[i] = i;

	cout << "Array contains: ";
	for (int& x : myArr)
		cout << ' ' << myArr[x];
	cout << endl;

	return 0;
}
