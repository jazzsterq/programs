/*AUTOMORPHIC NUMBER
 *IF THE SQUARE OF THE NUMBER CONSISTS THE NUMBER IN ITS LAST 
 *EXAMPLE: 5^2=25
 *        25^2=625
 */
package NUMBERS;
import java.util.*;
class AUTOMORPHIC_NUMBER
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int num=sa.nextInt();
            int d=num,count=0;
            int sq=num*num;
            while(num!=0)
            {
                count++;
                num/=10;
            }
            int p=(int)(Math.pow(10,count));
            if(sq%p==d)
                System.out.println("AUTOMORPHIC NUMBER");
            else
            System.out.println("NOT AN AUTOMORPHIC NUMBER");
        }
    }