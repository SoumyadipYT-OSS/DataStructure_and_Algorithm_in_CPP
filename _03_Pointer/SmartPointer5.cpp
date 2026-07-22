#include <iostream>
#include <memory>

class ExampleClass
{
public:
    int id = 1;
};

int main()
{
    // Create a shared pointer that owns the ExampleClass instance.
    std::shared_ptr<ExampleClass> ptr(new ExampleClass());

    // Create a weak pointer to the same object. It does not increase the reference count.
    std::weak_ptr<ExampleClass> weakPtr = ptr;

    if (auto strongPtr = weakPtr.lock())
    { // Attempt to convert back to shared_ptr
        std::cout << "Accessing ExampleClass via strongPtr: " << strongPtr->id << std::endl;
    }
    else
    {
        std::cout << "No instance found." << std::endl;
    }

    // Destroy the original shared pointer. Since weak pointers do not increase reference count,
    // this causes the owned object to be deallocated.
    ptr.reset();

    return 0;
}
