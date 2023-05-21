package ARRAY;
import java.util.*;
class SDA_SELECTION_SORT_ASCENDING
{
    public static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE RANGE");
        int n=sa.nextInt();
        int a[]=new int[n];
        System.out.println("ENTER THE NUMBERS");
        for(int i=0;i<n;i++)
            a[i]=sa.nextInt();
        int small,pos,temp;
        for(int i=0;i<n-1;i++)
        {
            small=a[i];
            pos=i;
            for(int j=i+1;j<n;j++)
            {
                if(a[j]<small)
                {
                    small=a[j];
                    pos=j;
                }
            }
            temp=a[i];
            a[i]=a[pos];
            a[pos]=temp;
        }
        System.out.println("SORTED LIST OF ARRAY \u00AE");
        for(int i=0;i<n;i++)
            System.out.print(a[i]+"\t");
    }
}