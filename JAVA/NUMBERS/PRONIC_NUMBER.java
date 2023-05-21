/*Pronic Number  is a number which is the product of two consecutive integers, that is, n (n + 1).
 * Example:6,12
 */
package NUMBERS;
import java.util.*;
class PRONIC_NUMBER
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int num=sa.nextInt();
            int mul=1,c=0;
            for(int i=1;i*(i+1)<=num;i++)
            { 
             if(i*(i+1)==num)
             {
                 c=1;
                 break;
                }
            }
            if(c==1)
            System.out.println("PRONIC NUMBER");
            else
            System.out.println("NOT A PRONIC NUMBER");
        }
    }