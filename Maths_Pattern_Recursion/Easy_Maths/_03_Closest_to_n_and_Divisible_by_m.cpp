#include<iostream>
using namespace std;


// [Naive approach] Iterative Checking - O(m) Time and O(1) Space
int closestNumber(int n, int m) 
{
    int closestNumber = 0;
    int minDifference = INT_MAX;
    
    for (int i=n-abs(m); i<n+abs(m); i++) 
    {
        if (i % m == 0) 
        {
            int difference = abs(n - i);

            if (difference < minDifference || (difference == minDifference && abs(i) > abs(closestNumber))) 
            {
                closestNumber = i;
                minDifference = difference;
            }
        }
    }

    return closestNumber;
}


int closestNumberByQuotient(int n, int m);


int main() 
{
    int N = 15;
    int M = 4;

    cout << closestNumber(N, M) << endl;

    cout << closestNumberByQuotient(N, M) << endl;

    return 0;
}



// By finding Quotient - O(1) Time and O(1) Space
int closestNumberByQuotient(int n, int m) 
{
    int q = n / m;
    int n1 = m * q;
    int n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1));

    if (abs(n - n1) < abs(n - n2))
        return n1;
    
    return n2;
}