package PATTERNS.A_TO_Z;
import java.util.*;
class Q
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int n=sa.nextInt();
            int k=1;
            for(int i=1;i<=n;i++)
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
            for(int i=1;i<=n/3;i++)
            {
                for(int j=k;j<=n;j++)
                {
                    System.out.print("  ");
                }
                System.out.println("*");
                k--;
            }
    }
}