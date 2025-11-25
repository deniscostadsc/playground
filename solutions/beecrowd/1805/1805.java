import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        long first, last;

        while (input.hasNextInt()) {
            first = input.nextInt();
            last = input.nextInt();

            System.out.println((last - first + 1) * (first + last) / 2);
        }
    }
}
