/*WAP FOR
 *****
  *  *
   * *
    **
     *
 */
package PATTERNS;
import java.util.*;
 class HOLLOW_TRIANGLE1
 {
     static void main()
     {
         Scanner sa=new Scanner(System.in);
         System.out.println("ENTER THE NUMBER");
         int n=sa.nextInt();
         for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=n;j++)
             {
                if(j==i||i==1||j==n)
                 System.out.print("*");
                else
                 System.out.print(" ");
             }
             System.out.println(); 
            }
        }
    }