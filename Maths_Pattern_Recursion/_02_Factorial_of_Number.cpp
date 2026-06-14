#include<iostream>
using namespace std;

int fact(int i) 
{
    if (i == 0)
        return 1;
    
    return i * fact(i - 1);
}

int main() 
{
    cout << "Factorial of 5: " << fact(5);

    return 0;
}
