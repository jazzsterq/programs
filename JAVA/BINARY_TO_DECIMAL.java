import java.util.*;
class BINARY_TO_DECIMAL
{
    static void main()
    {
        Scanner sa = new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        long n=sa.nextLong();
        long dig=0,sum=0,i=0;
        for(;n!=0;n/=10,i++)
        {
            dig=n%10;
            sum+=dig*Math.pow(2,i);  
        }
        System.out.println(sum);
    }
}
