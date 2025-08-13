using System.Text;
using static System.Console;

class HeadRecursion
{
    static void decToBinaryRec(int n, StringBuilder bin)
    {
        if (n == 0)
            return;

        decToBinaryRec(n / 2, bin);

        bin.Append(n % 2);
    }

    static string decToBinary(int n)
    {
        if (n == 0)
            return "0";

        StringBuilder bin = new StringBuilder();
        decToBinaryRec(n, bin);
        return bin.ToString();
    }


    static void Main()
    {
        int n = 12;
        WriteLine(decToBinary(n));
    }
}