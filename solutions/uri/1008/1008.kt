import java.util.*

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`);

    val a: Int = sc.next().toInt();
    val b: Int = sc.next().toInt();
    val c: Double = sc.next().toDouble();

    println("NUMBER = %d".format(a));
    println("SALARY = U$ %.2f".format(b * c));
}
