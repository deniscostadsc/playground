using System;
using System.Collections.Generic;

class Solution {
    static void Main() {
        int a, b, c, d;
        string val;

        val = Console.ReadLine();
        a = Convert.ToInt16(val);
        val = Console.ReadLine();
        b = Convert.ToInt16(val);
        val = Console.ReadLine();
        c = Convert.ToInt16(val);
        val = Console.ReadLine();
        d = Convert.ToInt16(val);

        Console.Write(
            "DIFERENCA = {0}{1}",
            a * b - c * d,
            Environment.NewLine
        );
    }
}
