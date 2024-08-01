/*
	How do you initialize a pointer to nullptr?
*/

#include <iostream>
using namespace std;

int main() {
	int* ptr = nullptr;

	if (ptr == nullptr) {
		cout << "The pointer is not pointing to any valid memory location." << endl;
	}
	cout << ptr << endl << &ptr << endl;

	return 0;
}
