package PATTERNS.A_TO_Z;
import java.util.*;
public class S
    {
        public static void main(String[] args)
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int n=sa.nextInt();
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
            {
                if(i==1||i==n||j==1)
                {
                    if(!(i==1&&j==1)&&!(i==n&&j==1))
                        System.out.print("* ");
                    else
                        System.out.print("  ");
                }
                else
                    System.out.print("  ");
            }
                System.out.print(" ");
                for(int j=1;j<=n/2;j++)
                {
                    if(i==1||i==n||(j==1&&i<=n/2)||(j==n/2&&i>=n/2)||i==n/2)
                    System.out.print("* ");
                    else
                    System.out.print("  ");
                }
                System.out.println();
            }
        }
    }