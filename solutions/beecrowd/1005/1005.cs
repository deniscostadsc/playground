using System;
using System.Collections.Generic;

class Solution {
    static void Main() {
        double a, b;
        string val;

        val = Console.ReadLine();
        a = Convert.ToDouble(val);
        val = Console.ReadLine();
        b = Convert.ToDouble(val);

        Console.Write(
            "MEDIA = {0:F5}{1}",
            (a * 3.5 + b * 7.5) / 11.0,
            Environment.NewLine
        );
    }
}
