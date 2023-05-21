package PATTERNS.A_TO_Z;
import java.util.*;
class R
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int n=sa.nextInt();
            int p=-n/2;
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n/2;j++)
                {
                    if(i==1||j==1||i==n/2+1||(j==n/2&&i<=n/2))
                    System.out.print("* ");
                   
                    else if(j==n/2&&i>=n/2)
                    {
                     for(int k=1;k<=p;k++)
                     System.out.print(" ");
                     System.out.print("* ");
                    }
                     else
                    System.out.print("  ");
                }
                System.out.println();
                p++;
            }
        }
    }