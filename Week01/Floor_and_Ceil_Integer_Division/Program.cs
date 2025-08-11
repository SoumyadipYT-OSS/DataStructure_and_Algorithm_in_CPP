using static System.Console;


class Program
{
    public static int floorDiv(int a, int b)
    {
        int q = a / b;

        if ((a ^ b) < 0 && a % b != 0)
            q--;

        return q;
    }


    public static int ceilDiv(int a, int b)
    {
        int q = a / b;

        if ((a ^ b) > 0 && a % b != 0)
            q++;

        return q;
    }


    public static int[] divFloorCeil(int a, int b)
    {
        int[] res = [floorDiv(a, b), ceilDiv(a, b)];
        return res;
    }


    static void Main()
    {
        int a, b;
        WriteLine("Enter Dividend: ");
        a = int.Parse(ReadLine());
        WriteLine("Enter Divisor: ");
        b = int.Parse(ReadLine());

        WriteLine(res[0] + " " + res[1]);
    }
}
