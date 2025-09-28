using System;

class Solution {
    static void Main() {
        int x_m, y_m, x_r, y_r;
        string line;
        string[] numbers;

        while ((line = Console.ReadLine()) != null) {
            numbers = line.Split(' ');

            x_m = Convert.ToInt32(numbers[0]);
            y_m = Convert.ToInt32(numbers[1]);
            x_r = Convert.ToInt32(numbers[2]);
            y_r = Convert.ToInt32(numbers[3]);

            Console.WriteLine("{0}", Math.Abs(x_r - x_m) + Math.Abs(y_r - y_m));
        }
    }
}
