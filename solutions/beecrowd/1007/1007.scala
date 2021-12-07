object Main {
    def main(args: Array[String]) {
        val a = io.StdIn.readLine().toInt
        val b = io.StdIn.readLine().toInt
        val c = io.StdIn.readLine().toInt
        val d = io.StdIn.readLine().toInt

        println("DIFERENCA = " + (a * b - c * d))
    }
}
