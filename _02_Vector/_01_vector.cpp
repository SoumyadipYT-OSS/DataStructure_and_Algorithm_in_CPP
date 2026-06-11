#include<iostream>
#include<vector>
using namespace std;

int main() 
{
    vector<int> list;

    list.push_back(10);
    list.push_back(20);
    list.push_back(30);

    cout << "Vector elements: ";
    for (int i=0; i<list.size(); i++) 
        cout << list[i] << " ";
    cout << endl;

    
    vector<int> list2 { 10, 20, 30 };

    cout << "Vector elements: ";
    for (int x : list2)
        cout << x << " ";
    cout << endl;

    return 0;
}