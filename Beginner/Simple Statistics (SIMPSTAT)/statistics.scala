object Main extends App {
	val t = readInt()
	(1 to t).map{_ =>
	  val l1 = readLine().split(" ").map(_.toInt)
	  val n = l1(0) //measures
	  val k = l1(1) //removes
	  
	  val measures = readLine().split(" ").map(_.toInt)
	  
	  val interestingMeasures = measures.sorted.drop(k).reverse.drop(k)
	  interestingMeasures.sum / interestingMeasures.size.toDouble
	}.foreach(println)
}
