package STRING;
import java.util.*;
class PALIN
{
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE STRING");
        String N=sa.nextLine();
        StringBuffer str= new StringBuffer(N);
        str.reverse();
        String rev=new String(str);         
        if(rev.equals(N))            
            System.out.println("PALINDROME");
        else
            System.out.println("NOT PALINDROME");
    }
}
