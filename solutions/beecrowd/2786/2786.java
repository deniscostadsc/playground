import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l, c;

        while (sc.hasNextInt()) {
            l = sc.nextInt();
            c = sc.nextInt();

            System.out.printf(
                "%d\n%d\n",
                (l * c) + ((l - 1) * (c - 1)),
                ((l - 1) * 2) + ((c - 1) * 2)
            );
        }

        sc.close();
    }
}
