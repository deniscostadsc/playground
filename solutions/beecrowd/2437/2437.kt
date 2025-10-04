import java.util.*

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`);

    while (sc.hasNextInt()) {
        val x_m = sc.next().toInt();
        val y_m = sc.next().toInt();
        val x_r = sc.next().toInt();
        val y_r = sc.next().toInt();

        println("%d".format(Math.abs(x_r - x_m) + Math.abs(y_r - y_m)))
    }
}
