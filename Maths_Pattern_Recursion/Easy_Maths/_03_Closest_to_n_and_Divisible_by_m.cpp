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


int main() 
{
    int N = 15;
    int M = 4;

    cout << closestNumber(N, M) << endl;

    return 0;
}
