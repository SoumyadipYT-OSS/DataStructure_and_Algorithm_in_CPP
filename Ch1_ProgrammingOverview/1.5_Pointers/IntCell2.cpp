#include "IntCell2.h"

IntCell2::IntCell2(int initialValue) : storedValue{ initialValue }
{
}

int IntCell2::read() const {
	return storedValue;
}

void IntCell2::write(int x) {
	storedValue = x;
}
