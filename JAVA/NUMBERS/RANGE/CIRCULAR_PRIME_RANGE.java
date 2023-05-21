package NUMBERS.RANGE;
import java.util.*;
class CIRCULAR_PRIME_RANGE
{
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        int num=sa.nextInt();
        for(int i=0;i<=num;i++)
        {
            CHECK(i);
        }
    }

    static void CHECK(int n)
    {
        int p=0,y,dup=n,dup1=n,count=0,rev=0,dig=0;
        while(dup1!=0)
        {
            count++;
            dup1/=10;
        }    
        while(rev!=dup)
        {
            rev=n+(dig*(int)Math.pow(10,count));
            dig=n%10;
            for( int i=2;i<=rev/2;i++)
            {
                y=n%i;
                if(y==0)
                {
                    p=1;
                    break;
                }
            }
            n=n/10;count--;
        }   
        if(p==0)
            System.out.println( dup+",");
    }
}