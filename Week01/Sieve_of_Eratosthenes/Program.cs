using static System.Console;
using System;
using System.Collections.Generic;

internal class Program
{
    static List<int> Sieve_of_Eratosthenis(int n)
    {
        // create boolean array
        bool[] primeArr = new bool[n + 1];

        // firstly taking all the elements as true
        for (int ele = 0; ele <= n; ele++)
            primeArr[ele] = true;


        // algorithm
        for (int i = 2; i * i <= n; i++)
        {
            if (primeArr[i])
            {
                for (int j = i * i; j <= n; j += i)
                {
                    primeArr[j] = false;
                }
            }
        }


        // stores result in list and return
        List<int> res = new List<int>();
        for (int i = 2; i <= n; i++)
        {
            if (primeArr[i])
                res.Add(i);
        }

        return res;
    }


    static void Main(string[] args)
    {
        int n = 50;
        List<int> output = Sieve_of_Eratosthenis(n);

        foreach (int itr in output)
            Write(itr + " ");
    }
}