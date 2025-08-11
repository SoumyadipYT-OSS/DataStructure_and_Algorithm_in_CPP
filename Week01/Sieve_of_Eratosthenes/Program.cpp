#include<iostream>
#include<vector>
using namespace std;


vector<int> SieveEratosFunction(int n) 
{
    // create a boolean array
    vector<bool> primeArr(n+1, true);

    // algorithm
    for (int i=2; i*i<=n; i++) {
        if (primeArr[i] == true) {
            // marking as false
            for (int j=i*i; j<=n; j+=i)
                primeArr[j] = false;
        }
    }

    // resultant array
    vector<int> res;
    for (int i=2; i<=n; i++) {
        if (primeArr[i])
            res.push_back(i);
    }

    return res;
}


int main() {
    int n = 35;

    vector<int> res = SieveEratosFunction(n);

    for (auto ele : res)
        cout << ele << ' ';
    
    return 0;
}