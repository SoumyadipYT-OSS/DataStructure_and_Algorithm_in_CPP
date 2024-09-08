/*
	
	template <class Tpl> class tuple_size;     // unspecializedtemplate <class T, size_t N>  struct tuple_size< array<T,N> >;         // array specialization
	Tuple size traits for array
	Accesses the size of an array object as if it was a tuple.


	template <class Tpl> class tuple_size;
	template <class T, size_t N>
	struct tuple_size< array<T,N> > : integral_constant <size_t,N> {};

*/

#include <iostream>     // std::cout
#include <tuple>        // std::tuple, std::tuple_size
using namespace std;

int main()
{
	std::tuple<int, char, double> mytuple(10, 'a', 3.14);

	std::cout << "mytuple has ";
	std::cout << std::tuple_size<decltype(mytuple)>::value;
	std::cout << " elements." << '\n';

	return 0;
}
