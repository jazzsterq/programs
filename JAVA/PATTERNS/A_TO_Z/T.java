package PATTERNS.A_TO_Z;
import java.util.*;
class T
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
                    if(i==1||j==n/2)
                    System.out.print("* ");
                    else
                    System.out.print("  ");
                }
                System.out.println();
            }
        }
    }