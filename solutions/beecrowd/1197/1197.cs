using System;

class Solution {
    static void Main() {
        int v, t;
        string line;
        string[] numbers;

        while ((line = Console.ReadLine()) != null) {
            numbers = line.Split(' ');
            v = Convert.ToInt16(numbers[0]);
            t = Convert.ToInt16(numbers[1]);

            Console.WriteLine(v * t * 2);
        }
    }
}
