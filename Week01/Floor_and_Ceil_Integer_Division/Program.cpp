// Approach 1: Using Standard Division with Sign Correction O(1) Time and O(1) Space

#include<iostream>
#include<vector>

using namespace std;


// Function to compute Floor Division
int floorDiv(int a, int b) {
    int q = a / b;

    if ((a ^ b) < 0  &&  a % b != 0)
        q--;
    
    return q;
}


// Function to compute Ceil Division
int ceilDiv(int a, int b) {
    int q = a / b;

    if ((a ^ b) > 0  &&  a % b != 0) {
        q++;
    }

    return q;
}


vector<int> divFloorCeil(int a, int b) {
    vector<int> result;

    result.push_back(floorDiv(a, b));
    result.push_back(ceilDiv(a, b));

    return result;
}


int main() {
    int a;
    int b;

    cout << "Enter Dividend: ";
    cin >> a;
    cout << "Enter Divisor: ";
    cin >> b;

    vector<int> res = divFloorCeil(a, b);
    cout << res[0] << ' ' << res[1] << endl;

    return 0;
}
