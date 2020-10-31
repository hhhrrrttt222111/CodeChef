object Main extends App {
	val t = readInt()
	(1 to t).map{ _ =>
	  val line = readLine().split(" ").map(_.toInt)
	  val n = line(0) //no of cities
	  val k = line(1) //size of jump
	  val x = line(2) //current
	  val y = line(3) //me
	  
	  rec(Set.empty, x, y, k, n)
	}.foreach{b =>
	    val res = if(b) "YES" else "NO"
	    println(res)
	}
  //@tailrec
  def rec(infected: Set[Int], current: Int, me: Int, jump: Int, cities: Int): Boolean = {
      val next = (current+jump) % cities
      if(next == me) {
          true
      } else if(infected.contains(next)) {
          false
      } else {
          rec(infected + next, next, me, jump, cities)
      }
  }
	
}
