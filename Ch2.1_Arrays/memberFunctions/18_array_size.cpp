// size(): constexpr size_type size() noexcept;

/*
	Return size
	Returns the number of elements in the array container.

	The size of an array object is always equal to the second 
	template parameter used to instantiate the array template class (N).

	Unlike the language operator sizeof, which returns the size in bytes, 
	this member function returns the size of the array in terms of number 
	of elements.
*/

#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 5> ints_arr;
	cout << "size of the array: " << ints_arr.size() << endl;
	cout << "sizeof(ints_arr): " << sizeof(ints_arr) << endl;

	return 0;
}
