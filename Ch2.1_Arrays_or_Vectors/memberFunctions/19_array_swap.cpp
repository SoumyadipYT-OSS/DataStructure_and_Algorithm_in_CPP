// swap(): void swap (array& x) noexcept(noexcept(swap(declval<value_type&>(),declval<value_type&>())));

/*
	Exchanges the content of the array by the content of x, which is another 
	array object of the same type (including the same size).

	After the call to this member function, the elements in this 
	container are those which were in x before the call, and the elements
	of x are those which were in this.
*/

#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 5> first = { 10, 20, 30, 40, 50 };
	array<int, 5> second = { 11, 22, 33, 44, 55 };

	first.swap(second);

	cout << "first: ";
	for (int& x : first) cout << ' ' << x;
	cout << endl;
	cout << "second: ";
	for (int& y : second) cout << ' ' << y;
	cout << endl;
	return 0;
}
