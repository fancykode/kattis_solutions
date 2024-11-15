using System;
using System.IO;

internal class Program
{
    static void Main(string[] args)
    {
        StreamReader reader = new StreamReader(Console.OpenStandardInput());
        ReadOnlySpan<char> quadkey = reader.ReadLine();
        int x = 0, y = 0;
        for (int i = 0; i < quadkey.Length; i++)
        {
            x += x;
            y += y;
            if (quadkey[i] == '1')
            {
                x++;
            }
            else if (quadkey[i] == '2')
            {
                y++;
            }
            else if (quadkey[i] == '3')
            {
                x++;
                y++;
            }
        }
        Console.WriteLine($"{quadkey.Length} {x} {y}");
    }
}
