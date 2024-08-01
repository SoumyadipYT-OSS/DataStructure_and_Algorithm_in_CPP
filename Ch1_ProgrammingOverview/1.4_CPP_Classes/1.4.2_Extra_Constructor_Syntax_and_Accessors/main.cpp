// Initialization list
/*
	The 'explicit' keyword is used to prevent implicit conversions of class types.
	It is used when we want to avoid implicit conversions of class types.
	For an example:
	- If we have a class IntCell and we want to prevent the following:
			IntCell cell = 10;
		- We can use the 'explicit' keyword in the constructor to prevent this

	- Benefits of using 'explicit' keyword:
		- It helps in preventing implicit conversions of class types.
		- It helps in preventing accidental conversions of class types.
		- It helps in preventing unexpected conversions of class types.
*/

#include <iostream>
using namespace std;

class IntCell {
public:
	explicit IntCell(int inititalValue = 0)
		: storedValue { inititalValue } { }

	int read() const {
		return storedValue;
	}

	void write(int x) {
		storedValue = x;
	}


	
	private:
		int storedValue;
};


int main() {
	IntCell cell1(10);
	// IntCell cell2 = 20; Error: Cannot convert from int to IntCell
	cout << cell1.read() << endl;
	// cout << cell2.read() << endl;
	return 0;
}
