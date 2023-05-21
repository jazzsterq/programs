package PATTERNS.A_TO_Z;
import java.util.*;
class A
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int n=sa.nextInt();
            int d=n;
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<d;j++)
                {
                    System.out.print(" ");
                }
                for(int k=1;k<2*i;k++)
                {
                    if(k==1||k==2*i-1||i==n/2+1)
                    System.out.print("*");
                    else
                    System.out.print(" ");
                }
                System.out.println();
                d--;
            }
        }
    }
                
