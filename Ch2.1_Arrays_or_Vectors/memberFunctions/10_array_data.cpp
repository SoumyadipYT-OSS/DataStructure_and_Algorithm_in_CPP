// data(): Pointer to the data contained by the array object.
//      If the array object is const - qualified, the function returns a pointer to const value_type. 
//		Otherwise, it returns a pointer to value_type.

#include <iostream>
#include <cstring>
#include <array>

using namespace std;

int main() {
	const char* cstr = "Data Structure C++";
	array<char, 20> charArray;

	memcpy(charArray.data(), cstr, 20);

	cout << charArray.data() << endl;

	return 0;
}