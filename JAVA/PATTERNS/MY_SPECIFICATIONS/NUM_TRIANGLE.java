/*WAP FOR
     0
    101
   21012
  3210123
 432101234
 */
package PATTERNS.MY_SPECIFICATIONS;
import java.util.*;
class NUM_TRIANGLE
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int n=sa.nextInt();
            int a=0;
            for(int i=0;i<n;i++)
            {
                for(int j=i;j<n;j++)
                {
                    System.out.print(" ");
                }
                for(a=i;a>=0;a--)
                    System.out.print(a);
                for(a=1;a<=i;a++)
                    System.out.print(a);
                System.out.println();
                }
            }
        }
                    