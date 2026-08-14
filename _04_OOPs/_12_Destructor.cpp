#include <iostream>


class DynamicArray 
{
private:
    int* data;
    size_t size;

public:
    DynamicArray(size_t n)
        : size(n) 
    {
        data = new int[size]();
        std::cout << "Constructor: Allocated " << size << " ints at " << data << "\n";
    }

    ~DynamicArray() 
    {
        std::cout << "Destructor: Freeing memory at " << data << "\n";
        delete [] data;
    }


    int& operator[] (size_t index) 
    {
        return data[index];
    }

    size_t getSize() const 
    {
        return size;
    }
};

void processArray() 
{
    DynamicArray arr(5);    // allocates on heap
    arr[0] = 10;
    arr[1] = 20;
}   // destructor called automatically here, memory feed


int main() 
{
    std::cout << "Entering process...\n";
    processArray();
    std::cout << "Exited processArray (memory cleaned up)\n";

    return 0;
}
