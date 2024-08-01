/*

	Question:	What does the * operator do when used with a pointer?

	Answer:
		The * operator, when used with a pointer, is called the dereference operator.
		It is used to access the value stored at the memory address that pointer is 
		pointing to.


	Explanation:
		Pointer declaration: int* ptr; declares a pointer to an integer.
		Assigning address:  ptr = &var; assigns the address of 'var' to the pointer 'ptr'.
		Deferencing: '*ptr' accesses the value stored at the stored at the address 'ptr' 
				pointing to. In this case, '*ptr' will be 10.

*/


#include <iostream>
using namespace std;

// main method
int main() {
	int var = 10;
	int* ptr = &var;

	cout << "Value of var: " << var << endl;
	cout << "Value of ptr (address of var): " << ptr << endl;
	cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

	return 0;
}
