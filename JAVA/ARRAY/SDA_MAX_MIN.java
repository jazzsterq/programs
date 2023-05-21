package ARRAY;
import java.util.*;
class SDA_MAX_MIN
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
            int min=a[0];
            int max=a[0];
            for(int i=0;i<n;i++)
            {
                if(a[i]>max)
                max=a[i];
                if(a[i]<min)
                min=a[i];
            }
            System.out.println("MAXIMUM "+max);
            System.out.println("MINIMUM "+min);
            System.out.println("SUM "+(max+min));
        }
    }
    