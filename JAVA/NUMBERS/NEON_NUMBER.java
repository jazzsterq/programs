/*NEON NUMBER
 *i.e. THE SUM OF SQUARE OF THE NUMBER IS THE NUMBER
 *9^2=81&8+1=9
 */
package NUMBERS;
import java.util.*;
class NEON_NUMBER
   {
       static void main()
       {
           Scanner sa=new Scanner(System.in);
           System.out.println("ENTER THE NUMBER");
           int num=sa.nextInt();
           int s=num*num,x=0,sum=0;
           while(s!=0)
           {
               x=s%10;
               sum+=x;
               s/=10;
            }
            if(sum==num)
            System.out.println("NEON NUMBER");
            else
              System.out.println("NOT A NEON NUMBER");
            }
        }