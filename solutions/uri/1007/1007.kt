import java.util.*

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`);

    val a: Int = sc.next().toInt();
    val b: Int = sc.next().toInt();
    val c: Int = sc.next().toInt();
    val d: Int = sc.next().toInt();

    println("DIFERENCA = %d".format(a * b - c * d));
}
