/*HAPPY NUMBER
  EXAMPLE:7,19
 */
package NUMBERS;
import java.util.*;
class HAPPY_NUMBER
    {
        static void main()
        {
            Scanner sa= new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int num=sa.nextInt();
            int dig=0,sum=0;
            while(num!=0)
            { 
              sum=0;
              for(;num!=0;num/=10)
              {
                dig=num%10;
                sum+=dig*dig;
              }
              if(sum==1||sum<10)
              break;
              num=sum;
            }
            if(sum==1)
            {
                System.out.println("HAPPY NUMBER");
            }
            else
            {
                System.out.println("NOT A HAPPY NUMBER");
            }
        }
    }