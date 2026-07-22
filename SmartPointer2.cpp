#include <iostream>
#include <memory>

class MyClass
{
private:
    int *m_value; // Pointer to dynamically allocated integer

public:
    // Constructor takes ownership of the pointer
    MyClass(int value) : m_value(new int(value)) {}

    ~MyClass()
    { // Destructor automatically deletes the managed integer
        std::cout << "Destructor called. Deleting m_value." << std::endl;
        delete m_value; // Ensure proper deallocation
    }

    int getValue() const { return *m_value; }
};

int main()
{
    {
        // Create a unique_ptr that owns a MyClass instance on the heap
        std::unique_ptr<MyClass> obj(new MyClass(42));

        // Access data through the object (if needed)
        int value = obj->getValue(); // Implicitly dereferences m_value
        std::cout << "Value: " << value << std::endl;
    } // `obj` goes out of scope here, triggering destructor

    return 0;
}