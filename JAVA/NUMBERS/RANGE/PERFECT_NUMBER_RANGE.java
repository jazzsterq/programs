/* PERFECT NUMBER RANGE
 * SUM OF FACTORS OF THE NUMBER EXCLUDING THE NUMBER IS THE NUMBER
 * I.E. 6=1+2+3=6
 */
package NUMBERS.RANGE;
import java.util.*;
class PERFECT_NUMBER_RANGE
    {
        public static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int num=sa.nextInt();
            int sum=0;
            for ( int j=0;j<=num;j++)
            {
            for(int i=1;i<=j/2;i++)
            {
                if(j%i==0)
                sum=sum+i;
            }
            if(sum==j)
            System.out.print(j+"\t");
          sum=0;
        }
    }
}             
                