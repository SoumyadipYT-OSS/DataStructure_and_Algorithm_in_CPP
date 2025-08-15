using static System.Console;

class Bitwise
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
            return gcd(a - b, b);

        return gcd(a, b - a);
    }


    static void Main()
    {
        int a = 20, b = 28;
        WriteLine(gcd(a, b));
    }
}
