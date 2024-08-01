/*
	Question 1: What is a pointer in C++?

	Answer:
		A pointer in C++ is a variable that stores the memory address 
	of another variable. Pointers are a powerful feature in C++ that 
	allow for efficient manipulation of arrays, dynamic memory allocation, 
	and the implementation of complex data structures like 
	linked lists and trees.

*/

#include <iostream>
using namespace std;

int main() {
	// Declaration
	int* ptr;

	// Initialization
	int var = 10;
	ptr = &var;

	// Dereferencing
	int value_of_pointer = *ptr;

	cout << "Value of var: " << var << endl;
	cout << "Address of var (&var): " << &var << endl;
	cout << "Value of ptr (address of var): " << ptr << endl;
	cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

	return 0;
}
