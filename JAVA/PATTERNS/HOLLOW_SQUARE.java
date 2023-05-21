/*WAP FOR HOLLOW SQUARE
   * * * * *
   *       *
   *       *
   *       *
   * * * * *
 */
package PATTERNS;
import java.util.*;
class HOLLOW_SQUARE
    {
          static void main()
           {
            Scanner sa= new Scanner(System.in);
            System.out.println("ENTER THE LEGNTH OF SIDE");
            int n=sa.nextInt();
            for( int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(i==1||i==n||j==1||j==n)
                        System.out.print("* ");
                    else
                        System.out.print("  ");
                    }
                    System.out.println();
                }
            }
        }
    
                        