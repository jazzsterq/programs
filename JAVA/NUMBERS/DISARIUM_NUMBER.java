/*A number will be called DSARIUM if sum of its digits powered with their respective position is equal to the original number.
For example 135 is a DISARIUM NUMBER
(Workings 1^1+3^2+5^3 = 135)
*/
package NUMBERS;
import java.util.*;
class DISARIUM_NUMBER
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int num=sa.nextInt();
            int d=num,d1=num,dig,sum=0,count;
            for( count=0;num!=0;num/=10 )
            {count++;
            }
            while(d!=0)
           {
               dig=d%10;
               sum+=(int)(Math.pow(dig,count));
               count--;
               d/=10;
            }
            if(d1==sum)
            System.out.println("DISARUM NUMBER");
            else
             System.out.println("NOT A DISARUM NUMBER");
            }
        }
               