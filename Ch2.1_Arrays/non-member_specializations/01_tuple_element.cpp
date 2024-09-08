/*
	template <size_t I, class Tpl> class tuple_element;   // unspecializedtemplate <size_t I, class T, size_t N>  struct tuple_element <I, array<T,N>>;               // array specialization
	Tuple element type for array
	Accesses the static type of the elements in an array object as if it was a tuple.

	This class specialization simply provides a member type, which aliases T, as if defined as:


	template <size_t I, class Tpl> class tuple_element;
	template <size_t I, class T, size_t N> struct tuple_element <I, array<T,N>>
	{
		typedef T type;
	};
*/


#include <iostream>
#include <tuple>
using namespace std;

int main() {
	auto mytuple = std::make_tuple(10, 'a');

	std::tuple_element<0, decltype(mytuple)>::type first = std::get<0>(mytuple);
	std::tuple_element<1, decltype(mytuple)>::type second = std::get<1>(mytuple);

	std::cout << "mytuple contains: " << first << " and " << second << '\n';

	return 0;
}
