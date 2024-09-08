// relational operators (array): template <class T, size_T N>  bool operator== ( const array<T,N>& lhs, const array<T,N>& rhs );
/*
	Relational operators for array
	Performs the appropriate comparison operation between the array containers lhs and rhs.

	The equality comparison (operator==) is performed by comparing the elements sequentially using operator==, stopping at the first mismatch (as if using algorithm equal).

	The less-than comparison (operator<) behaves as if using algorithm lexicographical_compare, which compares the elements sequentially using operator< in a reciprocal manner (i.e., checking both a<b and b<a) and stopping at the first occurrence.

*/