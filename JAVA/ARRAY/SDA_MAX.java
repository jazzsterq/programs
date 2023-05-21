package ARRAY;
import java.util.*;
class SDA_MAX
{
    public static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER RANGE");
        int n=sa.nextInt();
        int a[]=new int[n];
        System.out.println("ENTER THE NUMBERS");
        for(int i=0;i<n;i++)
            a[i]=sa.nextInt();
        int max2=a[0];
        int max=a[0];
        int pos=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
                pos=i;
            } 
        }
        for(int i=1;i<n;i++)
        {
            if(a[i]>max&&i!=pos)
                max=a[i];
        }
        System.out.println("MAXIMUM "+max);
        System.out.println("2nd MAXIMUM "+max2);
    }
}