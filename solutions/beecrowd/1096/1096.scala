object Main {
  def main(args: Array[String]): Unit = {
    for (i <- 1 to 9 by 2) {
      println(s"I=$i J=7")
      println(s"I=$i J=6")
      println(s"I=$i J=5")
    }
  }
}
