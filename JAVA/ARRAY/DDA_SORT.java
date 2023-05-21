package ARRAY;
import java.util.*;
class DDA_SORT
{
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE ORDER OF MATRIX");
        int p=sa.nextInt();
        int q=sa.nextInt();
        int a[][]=new int[p][q];
        System.out.println("ENTER THE ELEMENTS OF THE MATRIX");
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                a[i][j]=sa.nextInt();
            }
        }        
        for(int k=0;k<p;k++)
        {
            for(int i=0;i<q-1;i++)
            {
                for(int j=0;j<q-i-1;j++)
                { 
                    if(a[k][j]>a[k][j+1])
                    {
                        a[k][j]=a[k][j]+a[k][j+1];
                        a[k][j+1]=a[k][j]-a[k][j+1];
                        a[k][j]=a[k][j]-a[k][j+1];
                    }
                }
            }
        }        
        for(int i=0;i<p;i++)
            {
                for(int j=0;j<q;j++)
                {
                    System.out.print(a[i][j]+"  ");
                }
                System.out.println();
            }
    }
}
