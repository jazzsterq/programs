//TO CHEAK WEATHER THE NUMBER IS CIRCULAR PRIME OR NOT
// 197--> PRIME
// 719--> PRIME
// 971--> PRIME
package NUMBERS;
import java.util.*;
class CIRCULAR_PRIME
{
    static void main()
    {
        System.out.println("ENTER THE NUMBER");
        int n=new Scanner(System.in).nextInt();
        int found=0,dup=n,count=0,rev=0,dig=0;
        while(dup!=0)
        {
            count++;
            dup/=10;
        }  
        for(int i=1;i<=count;i++)
        {
            for( int j=2;j<=n/2;j++)
            {
                if(n%j==0)
                {
                    found=1;
                    break;
                }
            }
            System.out.println(n);
            n=((n%10)*(int)Math.pow(10,count-1))+n/10;
        }   
        if(found==0)
            System.out.println("CIRCULAR PRIME");
        else
            System.out.println("NOT A CIRCULAR PRIME");
    }
}
