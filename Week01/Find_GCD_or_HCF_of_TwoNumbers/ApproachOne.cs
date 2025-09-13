// Using Loop - O(min(a, b)) Time and O(1) Space

using System;

class ApproachOne
{
    // Function to find gcd of two numbers
    static int gcd(int a, int b)
    {
        // Find minimum between a and b
        int res = Math.Min(a, b);

        while (res > 0)
        {
            if (a % res == 0 && b % res == 0)
            {
                break;
            }
            res--;
        }

        // Return gcd of a and b
        return res;
    }


    static void Main()
    {
        int a = 36;
        int b = 60;
        Console.WriteLine(gcd(a, b));
    }
}
