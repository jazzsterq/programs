/* PERFECT NUMBER OR AMICABLE
 * SUM OF FACTORS OF THE NUMBER EXCLUDING THE NUMBER IS THE NUMBER
 * I.E. 6=1+2+3=6
 */
package NUMBERS;
import java.util.*;
class AMICABLE_NUMBER
    {
        public static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int num=sa.nextInt();
            int sum=0;
            for(int i=1;i<=num/2;i++)
            {
                if(num%i==0)
                sum=sum+i;
            }
            if(sum==num)
            System.out.println("PERFECT NUMBER");
            else
            System.out.println("NOT A PERFECT NUMBER");
        }
    }
                
                