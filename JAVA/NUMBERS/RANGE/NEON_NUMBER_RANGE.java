/*NEON NUMBER
 *i.e. THE SUM OF SQUARE OF THE NUMBER IS THE NUMBER
 *9^2=81&8+1=9
 */
package NUMBERS.RANGE;
import java.util.*;
class NEON_NUMBER_RANGE
   {
       static void main()
       {
           Scanner sa=new Scanner(System.in);
           System.out.println("ENTER THE NUMBER");
           int i=sa.nextInt();
           int s,x,sum;
           for(int num=0;num<=i;num++)
           {
            s=num*num;
            x=0;
            sum=0;
           while(s!=0)
           {
               x=s%10;
               sum+=x;
               s/=10;
            }
            if(sum==num)
            System.out.print(num+",");
            
            }
        }
    }