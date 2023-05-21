/* WAP TO CHECK ARMSTONG NUMBER RANGE
 * i.e.SUM OF CUBES OF DIGITS OF THE NUMBER =THE DIGIT(ARMSTRONG NUMBER)
 * FOR EXAMPLE : 153=1^3+5^3+3^3
 */
package NUMBERS.RANGE;
import java.util.*;
class ARMSTRONG_NUMBER_RANGE
    {
        public static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER ");
            int A= sa.nextInt();
            int x,y=0,n;
            for(n=1;n<=A;n++)
            {
                int d=n;
            while(d!=0)
            {
                x=d%10;
                y+=(int)Math.pow(x,3);
                d/=10;
            }
            if(y==n)
            System.out.print(n+",");           
            y=0;                    
    }
}
}