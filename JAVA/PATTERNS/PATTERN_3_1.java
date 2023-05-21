/*WAP FOR THE FOLLOWING PATTERN
     1
    12
   123
  1234 
 */
package PATTERNS;
import java.util.*;
 class PATTERN_3_1
 {
     static void main()
     {
         Scanner sa=new Scanner(System.in);
         System.out.println("ENTER THE NUMBER");
         int num=sa.nextInt();
         int d=num;
         for(int i=1;i<=num;i++)
         {
             for(int j=1;j<=(d-1);j++)
             {
                 System.out.print(" ");
                }
                 for(int k=1;k<=i;k++)
                 {
                     System.out.print(k);
                 }
             System.out.println(); 
            d--;
            }
        }
    }
    