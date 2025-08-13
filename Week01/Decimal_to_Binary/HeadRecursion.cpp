#include<iostream>
#include<algorithm>

using namespace std;

void decToBinaryRec(int n, string &bin) {
    if (n == 0)
        return;
    
    decToBinaryRec(n/2, bin);

    bin.push_back(n%2 + '0');
}


string decToBinary(int n) {
    if (n == 0)
        return "0";
    
    string bin = "";
    decToBinaryRec(n, bin);
    return bin;
}


int main() {
    int n = 12;
    cout << decToBinary(n);
    return 0;
}