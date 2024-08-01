/*

	C++ array with pointer

*/

#include <iostream>
using namespace std;

int main() {
	// initialization
	int arr[] = {10, 20, 30, 40, 50};
	int* ptr = arr;
	cout << "Value at ptr: " << *ptr << endl;
	ptr++;	// pointer value is incremented to point the next value in the array
	cout << "Value at ptr after increment: " << *ptr << endl;
	ptr += 2;	// incremented by 2
	cout << "Value at ptr after adding 2: " << *ptr << endl;

	return 0;
}
