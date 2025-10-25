import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int v, t;

        while (input.hasNextInt()) {
            v = input.nextInt();
            t = input.nextInt();

            System.out.printf("%d\n", v * t * 2);
        }
    }
}
