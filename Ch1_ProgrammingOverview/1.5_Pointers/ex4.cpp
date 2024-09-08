#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename T>
void ex4_swap(T& x, T& y) {
    T tmp = x;
    x = y;
    y = tmp;
    cout << "After swapping: a = " << x << ", b = " << y << endl;

}

void ex4_swap(vector<string>& x, vector<string>& y) {
    vector<string> tmp = x;
    x = y;
    y = tmp;
}

void swap_cast(vector<string>& x, vector<string>& y) {
    vector<string> tmp = static_cast<vector<string>&&>(x);
    x = static_cast<vector<string>&&>(y);
    y = static_cast<vector<string>&&>(tmp);
}

void swap_builtIn(vector<string>& x, vector<string>& y) {
    vector<string> temp = std::move(x);
    x = std::move(y);
    y = std::move(temp);
}


int main() {
    int a = 10, b = 20;
    float c = 3.14, d = 2.33;
    double e = 456.23478, f = 7895.23145;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    ex4_swap(a, b);
    
    cout << "Before swapping: c = " << c << ", d = " << d << endl;
    ex4_swap(c, d);
    
    cout << "Before swapping: e = " << e << ", f = " << f << endl;
    ex4_swap(e, f);
    
    return 0;
}
