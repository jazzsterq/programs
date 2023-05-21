/*TWIN PRIME NUMBER 
 * WHEN 2 PRIME NUMBERS HAVE A DIFFERENCE OF 2.
 */
package NUMBERS;
import java.util.*;
class TWIN_PRIME_NUMBER
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBERS");
            int a=sa.nextInt();
            int b=sa.nextInt();
            if(a-b==2||b-a==2)
            {
                int m=0;
                for(int i=2,j=2;(i<=a/2||j<=a/2);i++,j++)
               {
                   if(a%i==0||b%j==0)
                   {
                       m=1;
                       break;
                    }
                }
               
             if(m==0)
             System.out.println("TWIN PRIME NUMBERS");
             else
             System.out.println("NOT TWIN PRIME NUMBERS");
            }
            else
            System.out.println("NOT  TWIN PRIME NUMBER");
        }
    }