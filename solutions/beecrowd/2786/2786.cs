using System;

class Solution {
    static void Main() {
        int l, c;
        string line;

        while ((line = Console.ReadLine()) != null) {
            l = Convert.ToInt32(line);
            c = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine(
                "{0}\n{1}",
                (l * c) + ((l - 1) * (c - 1)),
                ((l - 1) * 2) + ((c - 1) * 2)
            );
        }
    }
}
