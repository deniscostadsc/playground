import java.util.*

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`);

    val a: String = sc.next();
    val b: String = sc.next();

    println("MEDIA = %.5f".format((a.toDouble() * 3.5 + b.toDouble() * 7.5) / 11.0));
}
