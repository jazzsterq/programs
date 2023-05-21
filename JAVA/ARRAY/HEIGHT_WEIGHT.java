//WAP TO INPUT HEIGHTS AND WEIGHTS OF N PEOPLE AND SORT THEM WITH RESPECT TO THEIR WEIGHT IN ASCENDING ORDER 
package ARRAY;
import java.util.*;
class HEIGHT_WEIGHT
{
    public static void main()
    {
        Scanner sa =new Scanner(System.in);
        System.out.println("ENTER THE RANGE");
        int n=sa.nextInt();
        int h[] =new int[n];
        int w[] =new int[n];
        int small,pos;
        System.out.println("ENTER HEIGHTS(IN CM) AND THEN WEIGHTS");
        for(int i=0;i<n;i++)
            h[i]=sa.nextInt();
        for(int i=0;i<n;i++)
            w[i]=sa.nextInt();
        for(int i=0;i<n-1;i++)
        {
            small =w[i];
            pos=i;
            for(int j=i+1;j<n;j++)
            {
                if(w[j]<small)
                {
                    small=w[j];pos=j;
                }
            }
            w[i]=w[i]+w[pos];
            w[pos]=w[i]-w[pos];
            w[i]=w[i]-w[pos];
            h[i]=h[i]+h[pos];
            h[pos]=h[i]-h[pos];
            h[i]=h[i]-h[pos];
        }
        System.out.println("SORTED LIST OF HEIGHT AND WEIGHT");
        for(int i=0 ;i<n;i++)
        System.out.println(h[i]+"\t"+w[i]);
    }
}

