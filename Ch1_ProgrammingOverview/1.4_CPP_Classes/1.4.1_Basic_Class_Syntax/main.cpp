/*
	A class for simulating an integer memory cell.
*/
#include <iostream>
using namespace std;

class IntCell {
	public:
		int initialValue = 0;
		IntCell() {
			int storedValue = 0;
		}

		IntCell(int initialValue) {
			int storedValue = initialValue;
		}
		
		int read() {
			return storedValue;
		}

		void write(int x) {
			storedValue = x;
		}

	private:
		int storedValue;
};


// main method
int main() {
	IntCell m1;
	IntCell m2(37);

	m1.write(4);
	m2.write(m1.read() + 1);
	std::cout << "Cell m1 contains: " << m1.read() << std::endl;
	std::cout << "Cell m2 contains: " << m2.read() << std::endl;

	return 0;
}

/* A complete declaration of an IntCell class */