package ARRAY;
import java.util.*;
class MAGIC_RANGE
{
    public static void main()
    {
        int sum=0,dig,dup;
        Scanner sa=new Scanner(System.in);
        int a[]=new int[10];
        System.out.println("ENTER THE 10 NUMBERS");
        for(int i=0;i<10;i++)
            a[i]=sa.nextInt();
        System.out.println("MAGIC NUMBERS ARE");
        for(int i=1;i<10;i++)
        {
            dup=a[i];
            while(sum!=1)
            {   
                sum=0;
                for(;dup!=0;dup/=10)
                {    
                    dig=dup%10;
                    sum+=dig;
                }
                if(sum==1||sum<10)
                    break;
                dup=sum;
            }
            if(sum==1)
                System.out.print(a[i]+"\t");
            sum=0;
        }
    }
}

            
        