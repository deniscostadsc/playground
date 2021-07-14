object Main {
    def main(args: Array[String]) {
        val a = io.StdIn.readLine().toInt
        val b = io.StdIn.readLine().toInt
        val c = io.StdIn.readLine().toDouble

        println("NUMBER = " + (a))
        println("SALARY = U$ %.2f".format(b * c))
    }
}
