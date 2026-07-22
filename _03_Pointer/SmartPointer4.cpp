#include <iostream>
#include <memory>


// Simple example class that uses dynamically allocated memory internally.
class ExampleClass
{
public:
    // Constructor allocates an integer on the heap and stores its address.
    ExampleClass() : data(new int(42)) {}

    // Destructor ensures the memory is freed when the shared_ptr goes out of scope.
    ~ExampleClass() { std::cout << "Deleting ExampleClass instance." << std::endl; }

    void displayValue() const
    {
        std::cout << "The value inside ExampleClass: " << *data << std::endl;
    }

private:
    int *data; // Pointer to dynamically allocated integer
};

int main()
{
    // Create the first shared_ptr, which takes ownership of the newly allocated object.
    std::shared_ptr<ExampleClass> ptr1(new ExampleClass());

    // `ptr1` now owns a managed ExampleClass instance. It automatically calls the destructor when it goes out of scope or is reset.
    ptr1->displayValue(); // Output: The value inside ExampleClass: 42

    // Create another shared_ptr, which shares ownership with `ptr1`.
    std::shared_ptr<ExampleClass> ptr2(ptr1); // Copying a shared_ptr increments the internal reference count.

    ptr2->displayValue(); // Also outputs: The value inside ExampleClass: 42 (same object accessed through different pointers)

    // When both shared_ptrs go out of scope, the destructor runs once, freeing the memory.
    return 0;
}
