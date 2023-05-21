package ARRAY;
import java.util.*;
class NUMBER_SHIFT
{
    public static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE RANGE");
        int n=sa.nextInt();
        int a[]=new int[n];
        System.out.println("ENTER THE ARRAY WITH BOTH NEGATIVE AND POSITIVE NO.");
        for(int i=0;i<n;i++)
            a[i]=sa.nextInt();
        int pos=a.length-1;    
        for(int i=0;i<a.length;i++)
        {
            while(a[pos]<0)
                pos--;
            if(a[i]>0)
            {
                int temp=a[i];
                a[i]=a[pos];
                a[pos]=temp;
                pos--;
            }
        }
        System.out.println("SORTED LIST OF ARRAY");
        for(int i=0;i<n;i++)
            System.out.print(a[i]+"\t");
    }
}
