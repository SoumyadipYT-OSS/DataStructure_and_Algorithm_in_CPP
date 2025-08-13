using static System.Console;

class Built_in
{
    public static int[] divFloorCeil(int a, int b)
    {
        int floorVal = (int)Math.Floor((double)a / b);
        int ceilVal = (int)Math.Ceiling((double)a / b);

        return new int[] { floorVal, ceilVal };
    }

    static void Main()
    {
        int a = -7, b = 2;

        int[] res = divFloorCeil(a, b);
        WriteLine(res[0] + " " + res[1]);
    }
}