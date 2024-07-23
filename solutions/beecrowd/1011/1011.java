import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String args[]) {
        Scanner input = new Scanner (System.in);

        float r;
        double pi = 3.14159;

        while (input.hasNextInt()) {
            r = input.nextInt();

            System.out.printf("VOLUME = %.3f\n", 4.0 / 3.0 * pi * Math.pow(r, 3));
        }
    }
}
