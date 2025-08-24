import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        float a, b, c;

        a = Float.parseFloat(in.readLine());
        b = Float.parseFloat(in.readLine());
        c = Float.parseFloat(in.readLine());

        System.out.printf("MEDIA = %.1f\n", (a * 2.0 + b * 3.0 + c * 5.0) / 10.0);
    }
}
