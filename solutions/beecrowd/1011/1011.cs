using System;

class Solution {
    static void Main() {
        double r, pi = 3.14159;
        string line;

        while ((line = Console.ReadLine()) != null) {
            r = Convert.ToDouble(line);
            Console.WriteLine("VOLUME = {0:F3}", 4.0 / 3.0 * pi * Math.Pow(r, 3));
        }
    }
}
