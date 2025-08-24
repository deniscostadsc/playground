import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double a, b, c, s = 0.0;

        while (sc.hasNextDouble()) {
            a = sc.nextDouble();
            b = sc.nextDouble();
            c = sc.nextDouble();

            s += b * c;
        }

        System.out.printf("VALOR A PAGAR: R$ %.2f\n", s);

        sc.close();
    }
}
