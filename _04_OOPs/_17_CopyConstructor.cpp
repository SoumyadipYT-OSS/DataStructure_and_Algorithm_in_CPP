#include <iostream>


class A 
{
public:
    int X;
};

int main() 
{
    A a1;
    a1.X = 10;

    // Copy constructor
    A a2(a1);
    std::cout << "a2 value: " << a2.X << "\n";

    return 0;
}