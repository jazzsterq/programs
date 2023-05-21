/*WAP FOR 
123*321
12* *21
1*   *1
*     *
1*   *1
12* *21
123*321

 */
package PATTERNS.MY_SPECIFICATIONS;
import java.util.*;
class HOLLOW_DIAMOND_S1
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");   
            int n=sa.nextInt();
            int a=1;
            for(int i=1;i<=n;i++)
            {
                for(int j=i;j<n;j++)
                {
                    System.out.print(a);
                    a++;
                }
                for(int k=1;k<2*i;k++)
                {
                    if(k==1||k==(2*i)-1)
                    System.out.print("*");
                    else
                    System.out.print(" ");
                }
                for(int j=i;j<n;j++)
                {  
                    System.out.print(--a);
                }
                System.out.println();
            }
            for(int i=n-1;i>=1;i--)
            {
                for(int j=i;j<n;j++)
                { System.out.print(a);
                  a++;
                }
                for(int k=1;k<2*i;k++)
                 {
                     if(k==1||k==(2*i)-1)
                    System.out.print("*");
                    
                    else
                    System.out.print(" ");
                }
                for(int j=i;j<n;j++)
                {  
                    System.out.print(--a);
                }
                System.out.println();
            }
          }
        }
               
