#include<iostream>
using namespace std;

int minIndex(int arr[], int s, int e) 
{
    int sml = INT32_MAX;
    int mindex;

    for (int i=s; i<e; i++) 
    {
        if (sml > arr[i]) 
        {
            sml = arr[i];
            mindex = i;
        }
    }

    return mindex;
}


void fun2(int arr[], int start_index, int end_index) 
{
    if (start_index >= end_index)
        return;
    
    int min_index;
    int temp;

    min_index = minIndex(arr, start_index, end_index);

    temp = arr[start_index];
    arr[start_index] = arr[min_index];
    arr[min_index] = temp;

    fun2(arr, start_index + 1, end_index);
}


int main() 
{
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    fun2(arr, 0, n);

    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}