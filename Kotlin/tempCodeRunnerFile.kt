import java.util.*;
fun main()
{
    val sc= Scanner ( System.`in`)
    var t = sc.nextInt()
    while(t-->0)
    {
      var n= sc.nextInt()
      val numbers = mutableListOf("")
      repeat(n)
      {
        var temp = sc.nextInt()
        numbers.add(temp.toString())
      }
      var count : Int = 0
      var pos : Int =0
      for(i in 1..n-1)
      {
        if(numbers[i]!=numbers[0])
        {
            count++
            pos=i
        }
      }
      println(count)
      if(count==n-1)
      {
        println(1)
      }
      else
      {
        println(pos+1)
      }
    }
}