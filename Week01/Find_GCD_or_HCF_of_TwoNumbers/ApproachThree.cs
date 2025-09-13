using System;

class ApproachThree
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
        {
            if (a % b == 0)
                return b;

            return gcd(a - b, b);
        }

        if (b % a == 0)
            return a;

        return gcd(a, b - a);
    }


    static void Main()
    {
        int a = 20, b = 28;
        Console.WriteLine(gcd(a, b));
    }
    
}