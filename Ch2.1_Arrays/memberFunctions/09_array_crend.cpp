// crend(): Returns a const_reverse_iterator pointing to the theoretical element preceding 
//		the first element in the vector, which is considered its reverse end.

#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 6> myArr = { 10,20,30,40,50,60 };
	cout << "myArray backwards: ";
	for (auto rit = myArr.crbegin(); rit <myArr.crend(); ++rit) {
		cout << ' ' << *rit;
	}

	cout << endl;

	return 0;
}