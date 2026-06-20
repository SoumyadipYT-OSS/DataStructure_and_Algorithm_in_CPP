#include<iostream>
using namespace std;

// Naive Approach [ Using Loop - O(n) Time and O(1) Space]
int findSum(int n) 
{
    int sum = 0;

    for (int i=0; i<=n; i++) 
    {
        sum = sum + i;
    }

    return sum;
}


int findSumRecursion(int n);

int findSumFormula(int n);


int main() 
{
    int n = 5;
    cout << findSum(n);

    cout << endl;

    cout << findSumRecursion(n);

    cout << endl;

    cout << findSumFormula(n);

    cout << endl;

    return 0;
}



// Using Recursion O(n) and O(n) Space
int findSumRecursion(int n) 
{
    if (n == 1)
        return 1;
    return n + findSum(n - 1);
}


// Using Formula Based Method
int findSumFormula(int n) 
{
    return (n * (n + 1)) / 2;
}