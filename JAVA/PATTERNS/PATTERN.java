package PATTERNS;
import java.util.*;
class PATTERN
{
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE NO. OF ROWS");
        int n=sa.nextInt();
        char a='A';
        for(int i=0;i<n;i++,a++)
        System.out.print(a);
        a--;
        for(int i=0;i<n;i++,a--)
        System.out.print(a);
        System.out.println();
        for(int i=0;i<n-1;i++)
        {
            a='A';
            for(int j=0;j<n-1-i;j++)
            {
                System.out.print(a);
                a++;
            }
            System.out.print(" ");a--;
            for(int j=0;j<n-1-i;j++)
            {
                System.out.print(a);
                a--;
            }
            System.out.println();
        }
        for(int i=n-2;i>-1;i--)
        {
            a='A';
            for(int j=0;j<n-1-i;j++)
            {
                System.out.print(a);
                a++;
            }
            System.out.print(" ");a--;
            for(int j=0;j<n-1-i;j++)
            {
                System.out.print(a);
                a--;
            }
            System.out.println();
        }
        a++;
        for(int i=0;i<n;i++,a++)
        System.out.print(a);
        a--;
        for(int i=0;i<n;i++,a--)
        System.out.print(a);
        System.out.println();
    }
}
        