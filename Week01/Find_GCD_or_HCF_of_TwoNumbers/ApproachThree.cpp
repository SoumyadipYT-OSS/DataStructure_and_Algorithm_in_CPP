// Modified Euclidean Algorithm using Substraction by Checking Divisibility - O(min(a,b)) Time and O(min(a,b)) Space
/*
    The above method can be optimized based on the following idea:

If we notice the previous approach, we can see at some point, one number becomes a factor of the other so instead of repeatedly subtracting till both become equal, we can check if it is a factor of the other.

Illustration:

See the below illustration for a better understanding:

Consider a = 98 and b = 56

a = 98, b = 56:

a > b so put a = a-b and b remains same. So  a = 98-56 = 42  & b= 56. 
a = 42, b = 56:

Since b > a, we check if b%a=0. Since answer is no, we proceed further. 
Now b>a. So b = b-a and a remains same. So b = 56-42 = 14 & a= 42. 
a = 42, b = 14:

Since a>b, we check if a%b=0. Now the answer is yes. 
So we print smaller among a and b as H.C.F . i.e. 42 is  3 times of 14.
So HCF is 14. 
*/

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
    if (a > b) {
        if (a % b == 0)
            return b;
        return gcd(a - b, b);
    }

    // b is greater
    if (b % a == 0)
        return a;
    return gcd(a, b - a);
}


// Driver code
int main()
{
    int a = 20, b = 28;
    cout << gcd(a, b);
    return 0;
}