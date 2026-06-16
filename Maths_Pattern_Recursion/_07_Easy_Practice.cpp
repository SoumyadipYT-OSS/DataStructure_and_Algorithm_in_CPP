#include<iostream>
using namespace std;

/* Assume that n is greater than or equal to 0 */
void fun2(int n)
{
    if (n == 0)
        return;

    fun2(n / 2);
    cout << n % 2;
}

// Driver code

int main()
{
    fun2(21);
    return 0;
}