using System;
using System.Collections.Generic;

class Solution {
    static void Main() {
        double a, b, c;
        string val;

        val = Console.ReadLine();
        a = Convert.ToDouble(val);
        val = Console.ReadLine();
        b = Convert.ToDouble(val);
        val = Console.ReadLine();
        c = Convert.ToDouble(val);

        Console.Write(
            "MEDIA = {0:F1}{1}",
            (a * 2.0 + b * 3.0 + c * 5.0) / 10.0,
            Environment.NewLine
        );
    }
}
