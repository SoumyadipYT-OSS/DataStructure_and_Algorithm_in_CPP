// cend(): Returns a const_iterator pointing to the past-the-end element in the array container.

#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 5> myArr = { 15,720,801,1002,3502 };
	cout << "myArr contains: " << endl;
	for (auto it = myArr.cend() - 1; it != myArr.cbegin() - 1; it--)
		cout << ' ' << *it;
	cout << endl;

	return 0;
}
