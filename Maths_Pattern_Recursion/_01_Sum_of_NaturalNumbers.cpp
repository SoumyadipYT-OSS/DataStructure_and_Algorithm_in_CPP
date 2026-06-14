#include<iostream>
using namespace std;

int sum(int i) 
{
    if (i == 1)
        return 1;
    
    return i + sum(i-1);
}


int main() 
{
    int n = 3;
    cout << sum(n) << endl;

    return 0;
}