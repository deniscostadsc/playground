object Main {
    def main(args: Array[String]) {
        val n = io.StdIn.readLine().toDouble

        println("A=%.4f".format(n * n * 3.14159))
    }
}
