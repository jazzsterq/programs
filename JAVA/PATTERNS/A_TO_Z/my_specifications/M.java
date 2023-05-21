package PATTERNS.A_TO_Z.my_specifications;
import java.util.*;
class M
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
                    if(j==1)
                    System.out.print("*");
                } 
                for(int j=1;j<=n;j++)
                {
                    if(j==i)
                    System.out.print("*");
                    else
                    System.out.print(" ");
                }
                for(int j=n;j>=1;j--)
                {
                    if(j==i)
                    System.out.print("*");
                    else
                    System.out.print(" ");
                }
                for(int j=1;j<=n;j++)
                {
                    if(j==n)
                    System.out.print("*");
                }
                System.out.println();
            }
        }
    }
                

                

