using System;
using System.Collections.Generic;

class Solution {
    static void Main() {
        double n;
        string val;

        val = Console.ReadLine();
        n = Convert.ToDouble(val);

        Console.Write("A={0:F4}{1}", n * n * 3.14159, Environment.NewLine);
    }
}
