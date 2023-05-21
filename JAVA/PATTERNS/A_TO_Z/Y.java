package PATTERNS.A_TO_Z;
import java.util.*;
class Y
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int n=sa.nextInt();
            for(int i=n-1;i>=1;i--)
            {
                for(int j=i;j<=n;j++)
                System.out.print(" ");
                for(int k=1;k<2*i;k++)
                {
                  if(k==1||k==2*i-1)
                  System.out.print("*");
                  else
                  System.out.print(" ");
                }
                System.out.println();
            }
            for(int i=1;i<=n/2;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    System.out.print(" ");
                }
                System.out.println("*");
            }
        }
    }
