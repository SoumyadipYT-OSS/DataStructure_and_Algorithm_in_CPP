/*
    Euclidean Algorithm using Subtraction - O(min(a,b)) Time and O(min(a,b)) Space
The idea of this algorithm is, the GCD of two numbers doesn't change if the smaller number is subtracted from the bigger number. 
This is the Euclidean algorithm by subtraction. It is a process of repeat subtraction, carrying the result forward each time until 
the result is equal to any one number being subtracted.
*/

using System;

class ApproachTwo
{
    static int gcd(int a, int b)
    {
        if (a == 0)
            return b;
        if (b == 0)
            return a;

        if (a == b)
            return a;
        if (a > b)
            return (a - b, b);
        else
            return (a, b - a);
    }


    static void Main()
    {
        int a = 36;
        int b = 60;
        Console.WriteLine(gcd(a, b));
    }
}