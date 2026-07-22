#include<iostream>

typedef int (*MathOperation)(int, int);

int add(int x, int y) 
{
    return x + y;
}

int subtract(int x, int y) 
{
    return x - y;
}

int multiply(int x, int y) 
{
    return x * y;
}

int division(int x, int y) 
{
    return x / y;
}



/**
 * @brief Executes an operation passed via a function pointer.
 * 
 * @param op A function pointer matching the MathOperation signature.
 * @param x The first integer operand.
 * @param y The second integer operand.
 * @return int The result of the operation (op(x, y)).
 */

int performOperation(MathOperation op, int x, int y) 
{
    return op(x, y);
}


int main() 
{
    int num1 = 0, num2 = 0;

    std::cout << "Enter num1: ";
    std::cin >> num1;
    std::cout << "Enter num2: ";
    std::cin >> num2;

    std::cout << "--- Function Pointer Demonstration ---" << std::endl;
    std::cout << "Numbers: " << num1 << " and " << num2 << "\n" << std::endl;

    std::cout << "Addition"<<std::endl;
    int sum = performOperation(&add, num1, num2);
    std::cout << "Result: " << sum << std::endl;

    std::cout << "Multipy" << std::endl;
    int mul = performOperation(&multiply, num1, num2);
    std::cout << "Result: " << mul << std::endl;

    std::cout << "Function pointer array" << std::endl;
    MathOperation operations[] = { &add, &subtract, &multiply, &division };
    int num_operations = sizeof(operations) / sizeof(operations[0]);

    for (int i=0; i<num_operations; i++) 
    {
        int res = operations[i](num1, num2);
        std::cout << "\t Operation " << i+1 << ": Result = " << res << std::endl;
    }

    return 0;
}