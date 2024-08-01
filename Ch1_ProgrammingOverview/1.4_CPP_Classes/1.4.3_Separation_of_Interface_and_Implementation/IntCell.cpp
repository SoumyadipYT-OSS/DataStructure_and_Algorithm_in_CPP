#include "IntCell.h"
#include <iostream>
using namespace std;

IntCell::IntCell(int initialValue) : storedValue{ initialValue } 
{
}

int IntCell::read() const {
	return storedValue;
}

void IntCell::write(int x) {
	storedValue = x;
}


// main method
int main() {
	IntCell obj1;	// Zero parameter constructor
	IntCell obj2( 12);	// One parameter constructor

	// IntCell obj3 = 37;	// Error: Constructor is explicit
	IntCell obj4();		// Function declaration

	obj1.write(5);
	obj2.write(6);
	
	cout << "Cell contents: " << obj1.read() << endl;
	cout << "Cell contents: " << obj2.read() << endl;

	return 0;
}
