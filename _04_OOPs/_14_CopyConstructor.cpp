#include<iostream>

class Box 
{
private:
   int data1;
   int data2;
   int* p;

public:
   Box(int d1, int d2, int*ptr) 
      : data1(d1), 
        data2(d2),
        p(new int(*ptr))
   { }

   // Copy Constructor
   Box(const Box& other) 
        : data1(other.data1),
          data2(other.data2),
          p(new int(*other.p))  // deep copy
   { }

   // Rule of 3
   Box& operator=(const Box& other) 
   {
        if (this != &other) 
        {
            data1 = other.data1;
            data2 = other.data2;
            delete p;  // delete existing memory
            p = new int(*other.p);  // allocate new memory and copy value
        }

        return *this;
   }

   ~Box() 
   {
        delete p;
   }
  
    
  void printDetails() 
  {
      std::cout << "Data 1: " << data1 << "\n";
      std::cout << "Data 2: " << data2 << "\n";
      std::cout << "Stored value: " << *p << "\n";
      std::cout << "Pointer (heap address): " << p << "\n";
      std::cout << "Address of the pointer: " << &p << "\n\n";
  }
    
};


int main() 
{
  int val = 30;
  Box b1(10, 20, &val);
  b1.printDetails();

  Box b2 = b1;
  b2.printDetails();
  

  return 0;
}
