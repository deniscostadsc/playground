using System;

class Solution {
    static void Main() {
        int a, b;
        double c;

        a = Convert.ToInt16(Console.ReadLine());
        b = Convert.ToInt16(Console.ReadLine());
        c = Convert.ToDouble(Console.ReadLine());

        Console.WriteLine("NUMBER = {0}", a);
        Console.WriteLine("SALARY = U$ {0:F2}", c * b);
    }
}
