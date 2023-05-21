package STRING;
/*PROGRAM TO ARRANGE CAPITAL LETTERS AND SMALL LETTERS 
 */
import java.util.*;
class ARRANGE
{
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE STRING");
        String str =sa.nextLine();
        str=str.trim();
        String ch="";
        for(int i=0;i<str.length();i++)
        {
            char a=str.charAt(i);
            if(a>='A'&&a<='Z')
                ch+=a;
        }
        ch+=" ";
        for(int i=0;i<str.length();i++)
        {
            char a=str.charAt(i);
            if(a>='a'&&a<='z')
                ch+=a;
        }
        System.out.println(ch);
    }
}