#include "IntCell2.h"
#include <iostream>
using namespace std;

int main() {
	IntCell2* m;

	m = new IntCell2{ 0 };
	m->write(5);
	cout << "Cell contents: " << m->read() << endl;

	delete m;

	return 0;
}
