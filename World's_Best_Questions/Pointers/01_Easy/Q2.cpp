/*
	Question 2: How do you declare a pointer to an integer?

	Answer:

	int* ptr;

	• Explanation:
		 int: This specifies that the pointer will point to an integer type.
		 *: This symbol indicates that 'ptr' is a pointer.
		 ptr: This is the name of the pointer variable.

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
