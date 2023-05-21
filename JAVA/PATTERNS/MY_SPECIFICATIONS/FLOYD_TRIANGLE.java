/*WAP FOR FLOYD TRIANGLE
1
2 3
4 5 6
7 8 9 10
 */
package PATTERNS.MY_SPECIFICATIONS;
import java.util.*;
class FLOYD_TRIANGLE
    {
        public static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER OF LINES");
            int num=sa.nextInt();
            int k=1;
            for(int i=1;i<=num;i++)
            {
                for(int j=1;j<=i;j++)
                {  if(k<10)
                   { System.out.print(k+"   ");
                    k++;
                   }
                   else if(k<100)
                   {
                    System.out.print(k+"  ");
                    k++;
                   }
                   else
                   {
                    System.out.print(k+" ");
                    k++;
                   }
                }
                 System.out.println();
            }
        }
    }
               
            
