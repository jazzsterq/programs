/*MAGIC NUMBER
  EXAMPLE:1531=>1+5+3+1=10=>1+0=1
 */
package NUMBERS;
import java.util.*;
class MAGIC_NUMBER
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
                sum+=dig;
              }
              if(sum==1||sum<10)
              break;
              num=sum;
            }
            if(sum==1)
            {
                System.out.println("MAGIC NUMBER");
            }
            else
            {
                System.out.println("NOT A MAGIC NUMBER");
            }
        }
    }