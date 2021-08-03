object Main {
    def main(args: Array[String]) {
        val _ = io.StdIn.readLine()
        val b = io.StdIn.readLine().toDouble
        val c = io.StdIn.readLine().toDouble

        println("TOTAL = R$ %.2f".format(b + (c * 0.15)))
    }
}
