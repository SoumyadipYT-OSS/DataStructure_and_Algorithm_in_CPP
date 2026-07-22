#include<iostream>
using namespace std;


int main() 
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    // int myArray[size];
    int* myArray = new int[size];

    for (int i=0; i<size; i++) 
    {
        cout << "Array[" << i << "]";
        cin >> myArray[i];
    }

    for (int i=0; i<size; i++) 
    {
        cout << *(myArray + i) << "  ";
    }

    // deallocate memory of the array
    delete[] myArray;
    myArray = nullptr;

    return 0;
}