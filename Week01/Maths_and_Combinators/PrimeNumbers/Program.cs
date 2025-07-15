using static System.Console;
using System;

internal class Program
{
    static bool IsPrime(int n)
    {
        if (n <= 1)
            return false;

        if (n == 2 || n == 3)
            return true;

        if (n % 2 == 0 || n % 3 == 0)
            return false;

        for (int i = 5; i <= Math.Sqrt(n); i += 6)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;

        return true;
    }


    static void Main(string[] args)
    {
        int n = 11;

        if (IsPrime(n))
            WriteLine("Prime number");
        else
            WriteLine("Not prime number");
    }
}