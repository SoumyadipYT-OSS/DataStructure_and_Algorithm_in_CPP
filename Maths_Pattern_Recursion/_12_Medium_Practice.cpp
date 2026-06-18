#include<iostream>
using namespace std;

int fun(int i) 
{
    if (i % 2) 
        return (i++);
    else 
        return fun(fun(i - 1));
}


int main() 
{
    cout << " " << fun(200) << " ";

    return 0;
}