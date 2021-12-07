using System;
using System.Collections.Generic;

class Solution {
    static void Main() {
        int a, b;
        string val;

        val = Console.ReadLine();
        a = Convert.ToInt32(val);
        val = Console.ReadLine();
        b = Convert.ToInt32(val);

        Console.Write("SOMA = {0}{1}", a + b, Environment.NewLine);
    }
}
