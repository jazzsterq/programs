import java.util.*;
fun main()
{
    val sc= Scanner ( System.`in`)
    var t = sc.nextInt()
    while(t-->0)
    {
        var s= sc.next()
        var count: Int =0
        var ind: Int =0
        var flag: Int =0
        var lp: Int = s.lastIndexOf('+')
        var store: Int = lp
        if(lp==-1)
        {
            println(-1)
            continue
        }
        while(ind<s.length)
        {
            if(s[ind]=='+')
            {
                count++
            }
            else
            {
                count--
                if(count<0&&flag==0)
                {
                    //s[ind]='+'
                    //s[lp]='-'
                    if(lp<ind)
                    {
                        flag=2
                        break
                    }
                    s=s.substring(0,lp)+"-"+s.substring(lp+1,s.length)
                    //println(s)
                    flag++
                    store=ind
                    count+=2;
                }
                else if(count<0&&flag==1)
                {
                    flag=2
                    break
                }
            }
            ind++
            //print(count)
        }
        if(flag==2)
        println(-1)
        else 
        {
            print(store+1)
            print(" ")
            print(lp+1)
            println()
        }
    }

}