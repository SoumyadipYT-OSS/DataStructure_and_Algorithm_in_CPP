#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 3> myArr = { 5, 19, 77 };
	cout << "front is: " << myArr.front() << endl;

	myArr.front() = 10;
	cout << "myArr now contains: " << endl;
	for (int& x : myArr)
		cout << ' ' << x;

	cout << endl;

	return 0;
}
