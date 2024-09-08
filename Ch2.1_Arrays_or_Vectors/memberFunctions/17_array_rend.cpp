// rend(): reverse_iterator rend() noexcept;const_reverse_iterator rend() const noexcept;

/*
	Return reverse iterator to reverse end
	Returns a reverse iterator pointing to the theoretical element preceding the 
	first element in the array (which is considered its reverse end).

The range between array::rbegin and array::rend contains all the elements of the array (in reverse order).
*/

#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 4> myArr = { 4, 26, 80, 14 };
	cout << "My array contains: ";
	for (auto rit = myArr.rbegin(); rit < myArr.rend(); ++rit)
		cout << ' ' << *rit;
	cout << endl;

	return 0;
}
