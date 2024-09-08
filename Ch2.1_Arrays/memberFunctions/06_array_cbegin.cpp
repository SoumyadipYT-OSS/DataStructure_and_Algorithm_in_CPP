// cbegin(): Returns a const_iterator pointing to the first element in the array container.

#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 5> myArr = { 2,16,77,34,50 };
	cout << "myArr contains: " << endl;
	for (auto it = myArr.cbegin(); it != myArr.cend(); ++it)
		cout << ' ' << *it;
	cout << '\n';
	
	return 0;
}
