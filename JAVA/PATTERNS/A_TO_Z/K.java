package PATTERNS.A_TO_Z;
import java.util.*;
class K
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int n=sa.nextInt();
            int d=n/2;
            for(int i=1;i<=n/2;i++)
                 {     
                     System.out.print("*");
                     for(int j=i;j<n/2;j++)
                     {
                         System.out.print(" ");
                        }
                        System.out.print("*");
                        System.out.println();
                    }
                    for(int i=1;i<=n/2;i++)
                    {     
                        System.out.print("*");
                        for(int j=i;j>=1;j--)
                        {
                            System.out.print(" ");
                    
                        }
                    System.out.print("*");
                     System.out.println();
            }
        }
    }
    