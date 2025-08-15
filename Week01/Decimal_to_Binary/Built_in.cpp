#include<iostream>
#include<cmath>
#include<bitset>
#include<string>

using namespace std;


string decToBinary(int n) 
{
    int len = (int)(log2(n));

    return bitset<64>(n).to_string().substr(64 - len - 1);
}

int main() {
    int n = 12;
    cout << decToBinary(n);
    return 0;
}