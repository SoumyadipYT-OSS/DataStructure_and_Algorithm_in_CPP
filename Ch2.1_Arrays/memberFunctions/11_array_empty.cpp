// empty(): Returns a bool value indicating whether the array container is empty, i.e. whether its size is 0.

#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 0> first;
	array<int, 5> second;

	cout << "first: " << (first.empty() ? "Empty array" : "Not empty") << endl;
	cout << "second: " << (second.empty() ? "Empty array" : "Not empty") << endl;

	return 0;
}
