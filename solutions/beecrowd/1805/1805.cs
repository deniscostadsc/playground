using System;

class Solution {
    static void Main() {
        long first, last;
        string line;
        string[] numbers;

        while ((line = Console.ReadLine()) != null) {
            numbers = line.Split(' ');
            first = Convert.ToInt64(numbers[0]);
            last = Convert.ToInt64(numbers[1]);

            Console.WriteLine((last - first + 1) * (first + last) / 2);
        }
    }
}
