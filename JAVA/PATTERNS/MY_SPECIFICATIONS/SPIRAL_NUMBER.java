//package PATTERNS.MY_SPECIFICATIONS;
import java.util.*;
class SPIRAL_NUMBER
{
    public static void main(String[] args)
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("Enter the number of rows");
        int n=sa.nextInt();
        int a[][]= new int[n][n];
        int s=1;
        int r1=0,c1=n-2,r2=n-2,c2=1;
        for(int i=0;i<(n/2)+1;i++)
        {
            for(int j=r1;j<n-i;j++)
            {
                a[i][j]=s;
                s++;
            }
            r1++;
            for(int j=c2;j<n-i;j++)
            {
                a[j][n-i-1]=s;
                s++;
            }
            c2++;
            for(int j=r2;j>=i;j--)
            {
                 a[n-i-1][j]=s;
                s++;
            }
            r2--;
            for(int j=c1;j>=i+1;j--)
            {
                a[j][i]=s;
                s++;
            }
            c1--;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                System.out.print(a[i][j]+"    ");
            }
            System.out.println();
        }
    }
}