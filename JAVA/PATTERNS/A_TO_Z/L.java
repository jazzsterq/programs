package PATTERNS.A_TO_Z;
import java.util.*;
class L
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
                    if(i==n||j==1)
                    System.out.print("* ");
                }
                System.out.println();
            }
        }
    }