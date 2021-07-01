object Main {
    def main(args: Array[String]) {
        val a = io.StdIn.readLine().toDouble
        val b = io.StdIn.readLine().toDouble
        val c = io.StdIn.readLine().toDouble

        println("MEDIA = %.1f".format((a * 2.0 + b * 3.0 + c * 5.0) / 10.0))
    }
}
