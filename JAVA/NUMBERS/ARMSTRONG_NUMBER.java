/* WAP TO CHECK ARMSTONG NUMBER i.e.SUM OF CUBES OF DIGITS OF THE NUMBER =THE DIGIT
 * FOR EXAMPLE : 153=1^3+5^3+3^3
 */
package NUMBERS; 
import java.util.*;
class ARMSTRONG_NUMBER
    {
        public static void main()
        {int y=0;
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER ");
            int n= sa.nextInt();int d=n;
            for(;n!=0;n/=10)
            {
                int x=n%10;
                y+=Math.pow(x,3);
            }
            if(y==d)
            System.out.println("IT IS A ARMSTRONG NUMBER");
            else
            System.out.println("IT IS NOT A ARMSTRONG NUMBER");
        }
    }