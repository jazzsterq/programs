package STRING;
import java.util.*;
class ALPHABETS
{
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE STRING");
        String str=sa.nextLine();
        String n="";
        for(int i=0;i<str.length();i++)
        {
            char a =str.charAt(i);
            if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
            {
                a+=2;
            }
            n+=a;
        }        
        System.out.println(n);
    }
}
           