package ARRAY;
import java.util.*;
class SDA_BUBBLE_SORT
{
    public static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE RANGE");
        int n=sa.nextInt();
        int a[]=new int[n];
        System.out.println("ENTER THE UNSORTED LIST OF ARRAY");
        for(int i=0;i<n;i++)
            a[i]=sa.nextInt();
        System.out.println("ENTER 1 FOR ASCENDING ORDER");
        System.out.println("ENTER 2 FOR DESCENDING ORDER");
        int s=sa.nextInt();
        switch(s)
        {
            case 1:
            for(int i=0;i<n-1;i++)
            {
                for(int j=0;j<n-i-1;j++)
                { 
                    if(a[j]>a[j+1])
                    {
                        a[j]=a[j]+a[j+1];
                        a[j+1]=a[j]-a[j+1];
                        a[j]=a[j]-a[j+1];
                    }
                }
            }
            System.out.println("SORTED LIST OF ARRAY");
            for(int i=0;i<n;i++)
                System.out.print(a[i]+"\t");
            break;
            case 2:
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n-i-1;j++)
                { 
                    if(a[j]<a[j+1])
                    {
                        a[j]=a[j]+a[j+1];
                        a[j+1]=a[j]-a[j+1];
                        a[j]=a[j]-a[j+1];
                    }
                }
            }
            System.out.println("SORTED LIST OF ARRAY");
            for(int i=0;i<n;i++)
            System.out.print(a[i]+"\t");
            break;
        }
    }
}