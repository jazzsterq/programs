/*A Duck number is a number which has zeroes present in it, but there should be no zero present in the beginning of the number. 
For example  3210, 7056,
 */  
package NUMBERS;
import java.util.*;
class DUCK_NUMBER
{
    static void main()
    {
        Scanner sa= new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        String num=sa.next();
        int n=Integer.parseInt(num);
        int check=0,dup=n;
        do
        { 
            while(n!=0)
            {
                int dig=n%10;
                if(dig==0)
                {
                    check=1;
                    break;
                }
                n/=10;
            }           
            if(check==1&&num.charAt(0)!='0')
                System.out.println("DUCK NUMBER\n\n");
            else
                System.out.println("NOT A DUCK NUMBER\n\n");
            System.out.println("ENTER 0 TO EXIT");
            System.out.println("ENTER THE NUMBER");
            num=sa.next();
            n=Integer.parseInt(num);
            check=0;dup=n;
        }while(dup!=0);
    }
}

