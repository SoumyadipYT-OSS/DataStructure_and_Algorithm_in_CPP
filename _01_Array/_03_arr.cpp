#include<iostream>
using namespace std;

int main() 
{
    int arr[5] = { 10, 20, 30, 40, 50 };
    int *p = arr + 2;
    cout << p[2];

    return 0;
}