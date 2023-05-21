// TO CONVERT THE ALPHABET IN OPPOSITE CASE
import java.util.*;
class CASE_CONVERSION
{
    public static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("Enter the alphabet");
        char a= sa.next().charAt(0);
         if((a>='A')&&(a<='Z'))
         a+=32;
         else
         a-=32;
         System.out.println(a);
    }
}