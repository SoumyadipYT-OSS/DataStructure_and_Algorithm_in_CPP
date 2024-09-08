// relational operators (array): template <class T, size_T N>  bool operator== ( const array<T,N>& lhs, const array<T,N>& rhs );
/*
	Relational operators for array
	Performs the appropriate comparison operation between the array containers lhs and rhs.

	The equality comparison (operator==) is performed by comparing the elements sequentially using operator==, stopping at the first mismatch (as if using algorithm equal).

	The less-than comparison (operator<) behaves as if using algorithm lexicographical_compare, which compares the elements sequentially using operator< in a reciprocal manner (i.e., checking both a<b and b<a) and stopping at the first occurrence.

*/

#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 5> a = { 10,20,30,40,50 };
	array<int, 5> b = { 10,20,30,40,50 };
	array<int, 5> c = { 50,40,30,20,10 };

	if (a == b) std::cout << "a and b are equal\n";
	if (b != c) std::cout << "b and c are not equal\n";
	if (b < c) std::cout << "b is less than c\n";
	if (c > b) std::cout << "c is greater than b\n";
	if (a <= b) std::cout << "a is less than or equal to b\n";
	if (a >= b) std::cout << "a is greater than or equal to b\n";

	return 0;
}
