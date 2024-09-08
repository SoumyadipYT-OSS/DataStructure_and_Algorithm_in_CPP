// crbegin(): Returns a const_reverse_iterator pointing to the last element in the array container.

#include <iostream>
#include <array>
using namespace std;

int main() {
	std::array<int, 6> myarray = { 10, 20, 30, 40, 50, 60 };

	std::cout << "myarray backwards:";
	for (auto rit = myarray.crbegin(); rit < myarray.crend(); ++rit)
		std::cout << ' ' << *rit;   // cannot modify *rit

	std::cout << '\n';

	return 0;
}
