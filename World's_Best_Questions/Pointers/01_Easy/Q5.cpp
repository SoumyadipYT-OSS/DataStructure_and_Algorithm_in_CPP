/*

	Question: How do you access the value stored at the 
			address a pointer is pointing to?

	Answer: 
		To access the value stored at the address a pointer
		pointing to, you use the 'dereference operator(*).
		This operator allows you to access the value directly
		from the memory address stored in the pointer.
		
*/


#include <iostream>
using namespace std;


int main() {
	int var = 10;
	int* ptr = &var;

	cout << "Value of ptr(address of var): " << ptr << endl;
	cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

	return 0;
}
