package PATTERNS.A_TO_Z;
import java.util.*;
class O
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
                if(i==1||i==n||j==1||j==n)
                {
                    if(!(i==1&&j==1)&&!(i==1&&j==n)&&!(i==n&&j==1)&&!(i==n&&j==n))
                        System.out.print("* ");
                    else
                        System.out.print("  ");
                }
                else
                    System.out.print("  ");
            }
            System.out.println();
        }
    }
}