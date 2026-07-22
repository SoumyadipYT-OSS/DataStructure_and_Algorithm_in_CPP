#include<iostream>
using namespace std;


int main() 
{
    int n = 5;
    cout << &n << endl;

    int* ptr = &n;

    cout << ptr << endl;

    // dereference pointer
    cout << *ptr << endl;       // print the value

    *ptr = 10;      // affect the main value 'n' as well
    cout << n << endl;

    return 0;
}