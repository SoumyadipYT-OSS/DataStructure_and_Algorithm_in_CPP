#include<iostream>
using namespace std;

int main() 
{
    int arr[] = { 10, 20, 30, 40, 50 };

    auto n = size(arr);

    cout << "Total number of elements: " << n << endl;

    cout << "Array elements: ";

    for (int i=0; i<n; i++) 
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}