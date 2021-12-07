object Main {
    def main(args: Array[String]) {
        val a = io.StdIn.readLine().toDouble
        val b = io.StdIn.readLine().toDouble

        println("MEDIA = %.5f".format((a * 3.5 + b * 7.5) / 11.0))
    }
}
