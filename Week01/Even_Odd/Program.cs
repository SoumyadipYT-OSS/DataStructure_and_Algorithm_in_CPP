using static System.Console;

class Program
{
    public static bool IsEven(int n)
    {
        int remainder = n % 2;
        if (remainder == 0)
            return true;
        else
            return false;
    }


    static void Main()
    {
        WriteLine("Enter an integer to check even or odd: ");
        int n = 0;
        n = int.Parse(ReadLine());

        if (IsEven(n))
            WriteLine("EVEN number");
        else
            WriteLine("ODD number");
    }
}