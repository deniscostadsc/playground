import java.util.*

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`);

    val n: String = sc.next();

    println("A=%.4f".format(n.toDouble() * n.toDouble() * 3.14159));
}
