using System;

class Solution {
    static void Main() {
        int b;
        double c, s = 0.0;
        string line;
        string[] numbers;

        while ((line = Console.ReadLine()) != null) {
            numbers = line.Split(' ');
            b = Convert.ToInt16(numbers[1]);
            c = Convert.ToDouble(numbers[2]);
            s += c * b;
        }

        Console.WriteLine("VALOR A PAGAR: R$ {0:F2}", s);
    }
}
