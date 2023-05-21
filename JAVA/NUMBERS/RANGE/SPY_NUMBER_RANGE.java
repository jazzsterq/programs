package NUMBERS.RANGE;
import java.util.*;
class SPY_NUMBER_RANGE
{
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        int n=sa.nextInt();
        for(int i=0;i<=n;i++)
        {
            SPY(i);
        }
    }

    static void SPY(int num)
    {
        int sum=0,prod=1,dup=num,dig;
        for(;num!=0;num/=10)
        {
            dig=num%10;
            sum=sum+dig;
            prod=prod*dig;
        }
        if(sum==prod)
          System.out.println(dup+",");
    }
}

