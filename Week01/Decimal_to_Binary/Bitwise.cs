using static System.Console;


class Bitwise
{
    static string decToBinary(int n)
    {
        StringBuilder bin = new StringBuilder();

        while (n > 0)
        {
            int bit = n & 1;
            bin.Append(bit);

            n = n >> 1;
        }

        char[] arr = bin.ToString().ToCharArray();
        Array.Reverse(arr);
        return new string(arr);
    }


    static void Main()
    {
        int n = 12;
        WriteLine(decToBinary(n));
    }
}
