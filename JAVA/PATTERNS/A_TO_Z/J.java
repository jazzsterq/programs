package PATTERNS.A_TO_Z;
import java.util.*;
class J
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
                    if(i==1||(i==n&&j<=n/2)||j==n/2||(j==1&&i>=5))
                    System.out.print("* ");
                    else
                    System.out.print("  ");
                }
                System.out.println();
            }
        }
    }