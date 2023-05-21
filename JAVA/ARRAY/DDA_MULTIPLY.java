package ARRAY;
import java.util.*;
class DDA_MULTIPLY
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
        if(q!=m)
        {
            System.out.println("MATRIX MULTIPLICATION NOT POSSIBLE");
        }
        else
        {
            int a[][]=new int[p][q];
            int b[][]=new int[m][n];
            int pro[][]=new int[p][n];
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
                for(int j=0;j<n;j++)
                {
                    for(int k=0;k<m;k++)
                    {
                        pro[i][j]+=a[i][k]*b[k][j];
                    }
                }
            }

            for(int i=0;i<p;i++)
            {
                for(int j=0;j<n;j++)
                {
                    System.out.print(pro[i][j]+"    ");
                }
                System.out.println();
            }
        }
    }
}