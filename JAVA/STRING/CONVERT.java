package STRING;
import java.util.*;
class CONVERT
{
    public static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE STRING");
        String n=sa.next();
        String a="";
        for(int i=0;i<n.length();i++)
        {
        if((n.charAt(i)>='A')&&(n.charAt(i)<='Z'))
         a+=(char)(n.charAt(i)+32);
         else
         a+=(char)(n.charAt(i)-32);
        }
        System.out.println(a);        
    }
}
          
