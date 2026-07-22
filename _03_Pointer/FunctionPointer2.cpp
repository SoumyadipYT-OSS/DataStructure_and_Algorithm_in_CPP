#include<iostream>


std::string getMessage() 
{
    std::cout << "You're very a good student!" << std::endl;

    std::string val = "This is a string value example";

    return val;
}

int add(int x, int y) 
{
    return x + y;
}


int main() 
{
    std::string(*funcPtr)() = getMessage;
    std::cout << funcPtr << std::endl;
    std::cout << funcPtr() << std::endl;

    int(*addPtr)(int, int) = add;
    std::cout << addPtr(5, 4) << std::endl;

    return 0;
}