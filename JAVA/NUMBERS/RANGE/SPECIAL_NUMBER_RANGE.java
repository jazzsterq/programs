/*SPECIAL NUMBER RANGE
 * I.E. THE SUM OF FACTORIAL OF THE DIGITS OF THE NUMBER =THE NUMBER
 * 145=1!+4!+5!
 */
package NUMBERS.RANGE;
import java.util.*;
class SPECIAL_NUMBER_RANGE
    {
        public static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int num=sa.nextInt();
            int d,dig=1,fact=1,sum=0;
            for (int i=1;i<=num;i++)
            {
                d=i;
                for(;d!=0;d/=10)
                {
                    dig=d%10;
                    for(int j=1;j<=dig;j++)
                    {
                        fact*=j;
                    }
                    sum+=fact;
                    fact=1;
                }
                if(sum==i)
                {
                System.out.print(i+",");
                }
                sum=0;
                
            }
    }
}
                    