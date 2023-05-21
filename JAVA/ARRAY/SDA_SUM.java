package ARRAY;
import java.util.*;
class SDA_SUM
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter range");
        int num=sc.nextInt();
        int a[]=new int[num];
        int b[]=new int[num];
        int i=0,j=0;
        System.out.println("ENTER  FIRST ARRAY");
        for( i=0;i<num;i++)
            a[i]=sc.nextInt();
        System.out.println("ENTER SECOND ARRAY");
        for( j=0;j<num;j++)
            b[j]=sc.nextInt();
        for(i=0;i<num;i++)
        {
            j=num-1;
            System.out.println("Sum="+a[i]+"+"+b[j]+"="+(a[i]+b[j]));
            j--;
        }
    }
}