import java.util.*

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`);

    sc.next();
    val b: Double = sc.next().toDouble();
    val c: Double = sc.next().toDouble();

    println("TOTAL = R$ %.2f".format(b + (c * 0.15)));
}
