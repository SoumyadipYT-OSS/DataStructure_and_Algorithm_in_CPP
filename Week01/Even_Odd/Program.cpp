#include<iostream>

using namespace std;


bool isEven(int n) {
    int remainder = n % 2;

    if (remainder == 0) 
        return true;
    else
        return false;
}


int main() {
    cout << "Enter an integer to check even odd: ";
    int num;
    cin >> num;
    
    if (isEven(num))
        cout << "EVEN number";
    else 
        cout << "ODD number";
}
