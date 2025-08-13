#include<iostream>
#include<cmath>
#include<vector>

using namespace std;


vector<int> divFloorCeil(int a, int b) {
    int floorVal = floor((double) a / b);
    int ceilVal = ceil((double)a / b);

    return {floorVal, ceilVal};
}

int main() {
    int a = -7, b = 2;

    vector<int> res = divFloorCeil(a, b);
    cout << res[0] << " " << res[1] << endl;

    return 0;
}