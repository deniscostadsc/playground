import java.util.*

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`);

    val a: String = sc.next();
    val b: String = sc.next();
    val c: String = sc.next();

    println(
        "MEDIA = %.1f".format(
            (a.toDouble() * 2.0 + b.toDouble() * 3.0 + c.toDouble() * 5.0) /
            10.0
        )
    );
}
