package PATTERNS.MY_SPECIFICATIONS;
import java.util.*;
 class TRIANGLE_1
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
                if(j==i||(i==1&&j%2==1))
                 System.out.print("*");
                else
                 System.out.print(" ");
             }
             for(int j=n-1;j>=1;j--)
             {
                if(j==i||(i==1&&j%2==1))
                 System.out.print("*");
                else
                 System.out.print(" ");
             }
             System.out.println(); 
            }
        }
    }