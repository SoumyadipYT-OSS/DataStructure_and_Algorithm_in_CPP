#include <iostream>


class ClassA 
{
private:
    int numA;

public:

    // friend class declaration
    friend class ClassB;

    ClassA()
        : numA(10) {}  
};

class ClassB 
{
private:
    int numB;

public:
    ClassB() 
        : numB(2) {}

    int add() 
    {
        ClassA a;
        return a.numA + numB;
    }
};


int main()  
{
    ClassB b;
    std::cout << "Sum: " << b.add() << "\n";

    return 0;
}
