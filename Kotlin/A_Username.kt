import java.util.*
fun score(s: String): Int {
    if(s[0]=='S')
    {
        return 1
    }
    if(s[0]=='M')
    {
        return 2
    }
    if(s[0]=='L')
    {
        return 3
    }
    if(s[0]=='X')
    {
        if(s[s.length-1]=='S')
        return 1
        else 
        return 3
    }
    return 0
}
fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    while (t-- > 0) {
       var s1 = sc.next()
       var s2 = sc.next()
       var p1 = score(s1)
       var p2 = score(s2)
       if(p1<p2)
       {
            println("<")
       }
       else if(p1>p2)
       {
        println(">")
       }
       else
       {
            if(s1.length>s2.length)
            {
                if(p1==3)
                println(">")
                else
                println("<")
            }
            else if(s1.length<s2.length)
            {
                if(p1==3)
                println("<")
                else 
                println(">")
            }
            else println("=")
       }
    }
}
