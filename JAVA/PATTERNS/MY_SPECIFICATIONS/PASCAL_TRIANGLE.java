package PATTERNS.MY_SPECIFICATIONS;
import java.util.*;
class PASCAL_TRIANGLE
    {
        static void main()
        {
            Scanner sa= new Scanner(System.in);
            System.out.println("ENTER THE NUMBER OF LINES");
            int n=sa.nextInt();
            for( int i=0;i<n;i++)
            {
                for(int j=i;j<n;j++)
                {
                  System.out.print(" ");   
                }
                int a=1;
                for (int j=0;j<=i;j++)
                {
                    System.out.print(a+" ");
                    a=a*(i-j)/(j+1);
                }
                System.out.println();
            }
        }
    }