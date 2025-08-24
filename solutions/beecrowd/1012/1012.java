import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        float a, b, c;
        double pi = 3.14159;

        while (input.hasNextDouble()) {
            a = input.nextFloat();
            b = input.nextFloat();
            c = input.nextFloat();

            System.out.printf("TRIANGULO: %.3f\n", a * c / 2);
            System.out.printf("CIRCULO: %.3f\n", pi * (c * c));
            System.out.printf("TRAPEZIO: %.3f\n", c * ((a + b) / 2));
            System.out.printf("QUADRADO: %.3f\n", b * b);
            System.out.printf("RETANGULO: %.3f\n", a * b);
        }
    }
}
