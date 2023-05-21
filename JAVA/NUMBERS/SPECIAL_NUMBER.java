/*SPECIAL NUMBER OR STRONG NUMBER
 * I.E. THE SUM OF FACTORIAL OF THE DIGITS OF THE NUMBER =THE NUMBER
 * 145=1!+4!+5!
 */
package NUMBERS;
import java.util.*;
class SPECIAL_NUMBER
    {
        public static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int num=sa.nextInt();
            int fact=1,sum=0,dig=1,i,d=num;
            while(num!=0)
            {
                dig=num%10;
                for(i=1;i<=dig;i++)
                {
                    fact*=i;
                }
                sum+=fact;
                fact=1;
                num/=10;
            }
            if(sum==d)
            System.out.println("SPECIAL NUMBER");
            else
            System.out.println("NOT A SPECIAL NUMBER");
        }
    }