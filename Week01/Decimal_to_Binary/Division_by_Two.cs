using static System.Console;
using System.Collections.Generic;

class Division_by_Two
{
    static string decToBinary(int n)
    {
        List<char> bin = new List<char>();

        while (n > 0)
        {
            int bit = n % 2;
            bin.Add((char)('0' + bit));
            n /= 2;
        }

        bin.Reverse();
        return new string(bin.ToArray());
    }

    static void Main()
    {
        int n = 12;
        WriteLine(decToBinary(n));
    }
}