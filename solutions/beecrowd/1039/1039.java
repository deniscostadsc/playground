import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        double r1, x1, y1, r2, x2, y2;

        while (sc.hasNextDouble()) {
            r1 = sc.nextDouble();
            x1 = sc.nextDouble();
            y1 = sc.nextDouble();
            r2 = sc.nextDouble();
            x2 = sc.nextDouble();
            y2 = sc.nextDouble();

            double distance = Math.sqrt(Math.pow(x1 - x2, 2) + Math.pow(y1 - y2, 2));

            if (r1 >= distance + r2) {
                System.out.println("RICO");
            } else {
                System.out.println("MORTO");
            }
        }

        sc.close();
    }
}
