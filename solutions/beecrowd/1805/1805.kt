import java.util.*

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`);

    while (sc.hasNextLong()) {
        val first = sc.nextLong()
        val last = sc.nextLong()
        println((last - first + 1) * (first + last) / 2)
    }
}
