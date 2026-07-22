#include <iostream>
using namespace std;

void printNumber(int *numberPtr)
{
    cout << *numberPtr << endl;
}

void printNumber(char *characterPtr)
{
    cout << *characterPtr << endl;
}

void printValue(void* ptr, char type) 
{
    switch (type)
    {
    case 'i':
        cout << *((int*)ptr) << endl;
        break;
    case 'c':
        cout << *((char*)ptr) << endl;
        break;
    
    default:
        cout << "Unknown pointer" << endl;
        break;
    }
}


int main()
{
    int number = 5;
    char letter = 'a';
    printNumber(&number);
    printNumber(&letter);
    printValue(&number, 'i');
    printValue(&letter, 'c');
    

    return 0;
}