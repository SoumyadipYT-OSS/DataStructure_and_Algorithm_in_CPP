/*
	Question: How do you assign the address of a variable to a pointer?

	Answer:
		To declare a pointer to an integer in C++, you use the '*' symbol. 

		Syntax:
			int* ptr;

		Explanation:
			int = This specifies that the pointer will point to an integer type.
			* = This symbol indicates that 'ptr' is a pointer.
			ptr = This is the name of the pointer variable.

*/

#include <iostream>
using namespace std;


int main() {
	int var = 10;
	int* ptr;

	ptr = &var;

	cout << "Value of var: " << var << endl;
	cout << "Address of var (&var): " << &var << endl;
	cout << "Value of ptr (address of var): " << ptr << endl;
	cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

	return 0;
}
