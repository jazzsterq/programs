/*WAP for HOLLOW TRIANGLE
*
**
* *
*  *
*   *
******
 */
package PATTERNS;
import java.util.*;
class HOLLOW_TRIANGLE
    {
        public static void main()
        {
            Scanner sa= new Scanner(System.in);
            System.out.println("ENTER THE NUMBER ");
            int num=sa.nextInt();
            for(int i=1;i<=num;i++)
            {
               for(int j=1;j<=num;j++)
               {   if(j==1||j==i||i==num)
                   System.out.print("*");
                   else
                   System.out.print(" ");
                }
                System.out.println();
            }
        }
    }