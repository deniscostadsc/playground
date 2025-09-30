import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int x_m, y_m, x_r, y_r;

        while (input.hasNextInt()) {
            x_m = input.nextInt();
            y_m = input.nextInt();
            x_r = input.nextInt();
            y_r = input.nextInt();

            System.out.println(Math.abs(x_r - x_m) + Math.abs(y_r - y_m));
        }
    }
}
