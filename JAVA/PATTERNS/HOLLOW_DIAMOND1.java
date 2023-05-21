/*WAP FOR  THE FOLLOWING
ABC*ABC
AB* *AB
A*   *A
*     *
A*   *A
AB* *AB
ABC*ABC

 */
package PATTERNS;
import java.util.*;
class HOLLOW_DIAMOND1
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");   
            int n=sa.nextInt();
            char a='A',b='A';
            for(int i=1;i<=n;i++)
            {
                for(int j=i;j<n;j++)
                {
                    System.out.print(a++);
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
                    System.out.print(b++);
                }
                System.out.println();
                a='A';
                b='A';
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
                    System.out.print(b++);
                }
                System.out.println();
                a='A';
                b='A';
            }
          }
        }