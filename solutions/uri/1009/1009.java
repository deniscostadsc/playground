import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String args[]) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        String a;
        float b, c;

        a = in.readLine();
        b = Float.parseFloat(in.readLine());
        c = Float.parseFloat(in.readLine());

        System.out.printf("TOTAL = R$ %.2f\n", b + (c * 0.15));
    }
}
