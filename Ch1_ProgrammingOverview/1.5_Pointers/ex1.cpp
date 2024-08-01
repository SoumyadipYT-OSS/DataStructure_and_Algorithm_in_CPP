#include <iostream>
using namespace std;

int main() {
	int var = 10;
	int* ptr;

	ptr = &var;

	cout << "Value of var: " << var << endl;
	cout << "Address of var(&var): " << &var << endl;
	cout << "Value of ptr (address of var): " << ptr << endl;
	cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;
	cout << "Address of the pointer: " << &ptr << endl;

	return 0;
}
