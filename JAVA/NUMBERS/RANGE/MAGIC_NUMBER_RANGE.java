/*MAGIC NUMBER
EXAMPLE:1531=>1+5+3+1=10=>1+0=1
 */
package NUMBERS.RANGE;
import java.util.*;
class MAGIC_NUMBER_RANGE
{
    static void main()
    {
        Scanner sa= new Scanner(System.in);
        System.out.println("ENTER THE RANGE");
        int a=sa.nextInt();
        int dig=0,sum=0,d;
        System.out.println("MAGIC NUMBERS OF THE RANGE");
        for(int num=1;num<a;num++)
        {
            d=num;
            while(d!=0)
            { 
                sum=0;
                for(;d!=0;d/=10)
                {
                    dig=d%10;
                    sum+=dig;
                }
                if(sum==1||sum<10)
                    break;
                d=sum;
            }
            if(sum==1)
                System.out.print(num+",");
            sum=0;
        }
    }
}
