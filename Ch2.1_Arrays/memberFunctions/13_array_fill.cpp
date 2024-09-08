// fill(): Sets val as the value for all the elements in the array object.

/*
	Value to fill the array with.
	Member type value_type is the type of the elements in the container, 
	defined in array as an alias of its first template parameter (T).
*/

#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 6> myArr;
	myArr.fill(5);

	cout << "myarray contains:";
	for (int& x : myArr) {
		cout << ' ' << x;
	}
	
	cout << endl;

	return 0;
}
