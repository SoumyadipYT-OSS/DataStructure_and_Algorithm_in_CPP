#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 10> arr;
	for (int i = 0; i < 10; i++)
		arr.at(i) = i + 1; // assign some values

	for (int i = 0; i < 10; i++)
		cout << arr.at(i) << ", ";

	cout << endl;
	return 0;
}
