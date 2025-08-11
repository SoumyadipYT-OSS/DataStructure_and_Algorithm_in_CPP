#include<iostream>

using namespace std;


bool isEven(int n) {
    if ((n & 1) == 0)
        return true;
    else 
        return false;
}


int main() {
    cout << "Enter an integer to check even odd: ";
    int x;
    cin >> x;

    if (isEven(x))
        cout << "EVEN number";
    else
        cout << "ODD number";
    
    return 0;

}