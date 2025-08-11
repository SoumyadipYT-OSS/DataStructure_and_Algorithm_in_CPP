using static System.Console;

class Bitwise
{
    public static bool IsEven(int n)
    {
        if ((n & 1) == 0)
            return true;
        else
            return false;
    }


    static void Main()
    {
        WriteLine("Enter an integer: ");
        int x = int.Parse(ReadLine());

        if (IsEven(x))
            WriteLine("EVEN number");
        else
            WriteLine("ODD number");
    }
}