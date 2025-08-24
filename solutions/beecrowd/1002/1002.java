import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        double n;

        n = Double.parseDouble(in.readLine());

        System.out.printf("A=%.4f\n", n * n * 3.14159);
    }
}
