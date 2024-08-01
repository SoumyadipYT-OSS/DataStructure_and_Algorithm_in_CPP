/*

	Question: What is the difference between int* ptr and int *ptr?

	Answer:
		In C++, there is no difference between 'int* ptr' and 'int *ptr' in terms
		of functionality. Both declarations are syntactically correct and declare 
		a pointer to an integer. The placement of the asterisk (*) is a matter of 
		style and personal or team preference.


			Key Points
		------------------
		Functionality: Both int* ptr and int *ptr are functionally identical. 
						They both declare a pointer to an integer.
		Readability: The choice between int* ptr and int *ptr is purely stylistic. 
					Some programmers prefer int* ptr because it emphasizes that ptr 
					is a pointer type. Others prefer int *ptr because it visually 
					associates the asterisk with the variable name, which can be helpful 
					when declaring multiple pointers in a single statement.

*/


#include <iostream>
using namespace std;

int main() {
	int var = 10;
	int* ptr1 = &var;
	cout << "Value pointed to by ptr1 (*ptr1): " << *ptr1 << endl;

	int *ptr2 = &var;
	cout << "Value pointed to by ptr2 (*ptr2): " << *ptr2 << endl;

	return 0;
}
