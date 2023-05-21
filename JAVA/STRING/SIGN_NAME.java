package STRING;
import java.util.*;
class SIGN_NAME
{
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE NAME");
        String n=sa.nextLine();
        n=n.trim();
        String a =n.charAt(0)+".";
        for(int i=1;i<n.length();i++)
        {
            char ch=n.charAt(i);
            if(Character.isWhitespace(ch)&&i!=n.lastIndexOf(' '))
            {
                char pos=n.charAt(i+1);
                a+=pos+".";
            }
        }
        System.out.println(a+n.substring(n.lastIndexOf(' ')+1));
    }
}

            
                        