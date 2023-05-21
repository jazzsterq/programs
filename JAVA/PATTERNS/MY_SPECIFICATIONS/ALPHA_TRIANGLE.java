/*WAP FOR 
     A 
    A B 
   A B C 
  A B C D 
 A B C D E 
 */
package PATTERNS.MY_SPECIFICATIONS;
import java.util.*;
class ALPHA_TRIANGLE
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");   
            int n=sa.nextInt();  
            char  m;
            for(int i=1;i<=n;i++)
            {
                for(int j=i;j<n;j++)
                {
                    System.out.print(" ");
                }
                for(m='A';m<i+65;m++)
                    System.out.print(m+" ");
                System.out.println();
            }
        }
    }
    
