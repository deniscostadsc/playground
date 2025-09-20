import java.util.*

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`);
    val n: Int = sc.next().toInt();

    for (i in 1..n) {
        println("%d %d %d".format(i, i * i, i * i * i))
    }
}
