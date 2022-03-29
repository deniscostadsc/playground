using System;

class Solution {
    static void Main() {
        double a, b, c, pi = 3.14159;
        string line;
        string[] numbers;

        while ((line = Console.ReadLine()) != null) {
            numbers = line.Split(' ');
            a = Convert.ToDouble(numbers[0]);
            b = Convert.ToDouble(numbers[1]);
            c = Convert.ToDouble(numbers[2]);
            
            Console.WriteLine("TRIANGULO: {0:F3}", a * c / 2);
            Console.WriteLine("CIRCULO: {0:F3}", pi * (c * c));
            Console.WriteLine("TRAPEZIO: {0:F3}", c * ((a + b) / 2));
            Console.WriteLine("QUADRADO: {0:F3}", b * b);
            Console.WriteLine("RETANGULO: {0:F3}", a * b);
        }
    }
}
