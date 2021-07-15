using System;

class Solution {
    static void Main() {
        double b, c;

        _ = Console.ReadLine();
        b = Convert.ToDouble(Console.ReadLine());
        c = Convert.ToDouble(Console.ReadLine());

        Console.WriteLine("TOTAL = R$ {0:F2}", b + c * 0.15);
    }
}
