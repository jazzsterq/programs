package ARRAY;
import java.util.*;
class DDA_ADD
{
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE ORDER OF FIRST MATRIX");
        int p=sa.nextInt();
        int q=sa.nextInt();
        System.out.println("ENTER THE ORDER OF SECOND MATRIX");
        int m=sa.nextInt();
        int n=sa.nextInt();
        if(p!=m&&q!=n)
        {
            System.out.println("MATRIX ADDITION NOT POSSIBLE");
        }
        else
        {
            int a[][]=new int[p][q];
            int b[][]=new int[m][n];
            int sum[][]=new int[p][q];
            System.out.println("ENTER THE ELEMENTS OF THE FIRST MATRIX");
            for(int i=0;i<p;i++)
            {
                for(int j=0;j<q;j++)
                {
                    a[i][j]=sa.nextInt();
                }
            }        
            System.out.println("ENTER THE ELEMENTS OF THE SECOND MATRIX");
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    b[i][j]=sa.nextInt();
                }
            }
            for(int i=0;i<p;i++)
            {
                for(int j=0;j<q;j++)
                {
                    sum[i][j]=a[i][j]+b[i][j];
                    System.out.print(sum[i][j]+"  ");
                }
                System.out.println();
            }
        }
    }
}