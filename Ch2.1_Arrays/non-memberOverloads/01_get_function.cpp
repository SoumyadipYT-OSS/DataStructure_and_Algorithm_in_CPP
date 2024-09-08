// get(array): template <size_t I, class T, size_t N> T& get (array<T,N>& arr) noexcept;template <size_t I, class T, size_t N> T&& get (array<T,N>&& arr) noexcept;template <size_t I, class T, size_t N> const T& get (const array<T,N>& arr) noexcept;

/*
	Get element (tuple interface)
	Returns a reference to the Ith element of array arr.

	This overload of tuple's homonym function get is provided so 
	that array objects can be treated as tuples. 
	For that purpose, header <array> also overloads tuple_size and 
	tuple_element types with the appropriate members defined.
*/

#include<iostream>
#include<array>
#include<tuple>
using namespace std;

int main() {
    array<int, 3> myArr = { 10, 20, 30 };
    tuple<int, int, int> myTup = make_tuple(10, 20, 30);
    array<int, 3>::value_type ele;  // int element

    ele = myArr[2];
    myArr[2] = myArr[0];
    myArr[0] = ele;

    cout << "first element in array: " << myArr[0] << endl;
    cout << "first element in tuple: " << get<0>(myTup) << endl;

    return 0;
}
