import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String args[]) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        int a, b, c, d;

        a = Integer.parseInt(in.readLine());
        b = Integer.parseInt(in.readLine());
        c = Integer.parseInt(in.readLine());
        d = Integer.parseInt(in.readLine());

        System.out.printf("DIFERENCA = %d\n", a * b - c * d);
    }
}
