using static System.Console;
using static System.Convert;


class Built_in
{
    static string decToBinary(int n)
    {
        return ToString(n, 2);      // Convert.ToString() method
    }

    static void Main()
    {
        int n = 12;
        WriteLine(decToBinary(n));
    }
}
