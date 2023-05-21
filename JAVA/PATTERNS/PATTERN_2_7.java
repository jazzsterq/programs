/* WAP TO PRINT THE GIVEN PATTERN

1
21
321
4321
54321
...continued with respect to iput given
*/
package PATTERNS;
import java.util.*;
class PATTERN_2_7
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int num=sa.nextInt();
            for (int i=1;i<=num;i++)
            {
                for(int s=i;s>=1;s--)
                {
                    System.out.print(s);
                }
                System.out.println();
            }
        }
    }