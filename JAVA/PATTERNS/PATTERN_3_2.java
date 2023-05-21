/*WAP FOR FOLLOWING PATTERN
12345
 1234
  123
   12
    1
 */
package PATTERNS;
import java.util.*;
 class PATTERN_3_2
 {
     static void main()
     {
         Scanner sa=new Scanner(System.in);
         System.out.println("ENTER THE NUMBER");
         int num=sa.nextInt();
         int m=0;
         for(int i=num;i>=1;i--)
         {
             for(int j=1;j<=m;j++)
             {
                 System.out.print(" ");
             }
             for(int k=1;k<=i;k++)
             {
                 System.out.print(k);
             }
             System.out.println(); 
             m++;
            }
        }
    }
    