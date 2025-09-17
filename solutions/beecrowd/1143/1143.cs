using System;

class Solution {
    static void Main() {
        int n = Convert.ToInt32(Console.ReadLine());

        for (int i = 1; i <= n; i++) {
            Console.WriteLine("{0} {1} {2}", i, i * i, i * i * i);
        }
    }
}
