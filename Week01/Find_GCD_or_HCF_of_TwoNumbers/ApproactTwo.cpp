// Euclidean Algorithm using Substraction - O(min(a, b)) Time and O(min(a, b)) Space
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // Base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int main()
{
    int a = 20, b = 28;
    cout << gcd(a, b);
    return 0;
}