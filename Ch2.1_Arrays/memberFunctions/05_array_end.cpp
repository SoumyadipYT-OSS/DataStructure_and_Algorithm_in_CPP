// array.end(): Returns an iterator pointing to the past-the-end element in the array container.

#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 3> myArr = { 5,19,77 };
	cout << "myArr contains: " << endl;
	for (auto i = myArr.end()-1; i!=myArr.begin()-1; i--)
		cout << ' ' << *i;
	cout << endl;

	return 0;
}
