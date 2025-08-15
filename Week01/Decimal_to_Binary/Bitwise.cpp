#include<iostream>
#include<algorithm>

using namespace std;


string decToBinary(int n) {
    string bin = "";

    while (n > 0) {
        int bit = n & 1;
        bin.push_back('0' + bit);

        n = n >> 1;
    }

    reverse(bin.begin(), bin.end());
    return bin;
}


int main() {
    int n = 12;
    cout << decToBinary(n);
    return 0;
}