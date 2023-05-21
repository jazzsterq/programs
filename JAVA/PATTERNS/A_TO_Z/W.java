package PATTERNS.A_TO_Z;
import java.util.*;
class W
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int n=sa.nextInt();
            int d=n;
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(j==1||j==n)
                    System.out.print("* ");
                    else if((j==i||j==d)&&i>n/2)
                    System.out.print("* ");
                    else
                    System.out.print("  ");
                }
                System.out.println();
                d--;
            }
        }
    }