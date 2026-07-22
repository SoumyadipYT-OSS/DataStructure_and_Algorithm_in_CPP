#include <iostream>
#include <memory>


int main() 
{
    // Create a unique_ptr to manage an integer on the heap
    std::unique_ptr<int> ptr(new int(42));

    // Access and print the value through the pointer
    std::cout << "Value: " << *ptr << std::endl;

    // The unique_ptr will automatically delete the integer when it goes out of scope
    return 0;
}
