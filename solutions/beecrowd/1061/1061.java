import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int initialDay, initialHour, initialMinute, initialSecond;
        int finalDay, finalHour, finalMinute, finalSecond;
        int deltaDay, deltaHour, deltaMinute, deltaSecond;

        while (sc.hasNext()) {
            sc.next(); // ignore "Dia"
            initialDay = Integer.parseInt(sc.next());
            initialHour = Integer.parseInt(sc.next());
            sc.next(); // ignore ":"
            initialMinute = Integer.parseInt(sc.next());
            sc.next(); // ignore ":"
            initialSecond = Integer.parseInt(sc.next());

            sc.next(); // ignore "Dia"
            finalDay = Integer.parseInt(sc.next());
            finalHour = Integer.parseInt(sc.next());
            sc.next(); // ignore ":"
            finalMinute = Integer.parseInt(sc.next());
            sc.next(); // ignore ":"
            finalSecond = Integer.parseInt(sc.next());

            deltaDay = finalDay - initialDay;
            deltaHour = finalHour - initialHour;
            deltaMinute = finalMinute - initialMinute;
            deltaSecond = finalSecond - initialSecond;

            if (deltaSecond < 0) {
                deltaSecond += 60;
                deltaMinute--;
            }

            if (deltaMinute < 0) {
                deltaMinute += 60;
                deltaHour--;
            }

            if (deltaHour < 0) {
                deltaHour += 24;
                deltaDay--;
            }

            System.out.printf("%d dia(s)\n", deltaDay);
            System.out.printf("%d hora(s)\n", deltaHour);
            System.out.printf("%d minuto(s)\n", deltaMinute);
            System.out.printf("%d segundo(s)\n", deltaSecond);
        }

        sc.close();
    }
}
