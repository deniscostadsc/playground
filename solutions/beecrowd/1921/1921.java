import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        long n;

        while (input.hasNextLong()) {
            n = input.nextLong();

            System.out.println((n * (n - 1) / 2) - n);
        }
    }
}
