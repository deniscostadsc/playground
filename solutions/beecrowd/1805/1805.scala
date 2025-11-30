import java.util.Scanner

object Main {
  def main(args: Array[String]): Unit = {
    val scanner = new Scanner(System.in)

    while (scanner.hasNextLong) {
      val first = scanner.nextLong()
      val last = scanner.nextLong()
      val result = (last - first + 1) * (first + last) / 2

      println(result)
    }
  }
}
