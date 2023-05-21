package NUMBERS;
import java.util.*;
class PRIMORIAL_NUMBER
{
    static void main()
    {
        int found=0,prod=1;
        System.out.println("ENTER THE NUMBER");
        int n=new Scanner(System.in).nextInt();
        for( int j=2;j<=n/2;j++)
        {
            if(n%j==0)
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            for(int i=2;i<=n;i++)
            {
                found=0;
                for( int j=2;j<=i/2;j++)
                {
                    if(i%j==0)
                    {
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    prod*=i;
                    System.out.print(i+" ");
                }
            }
            System.out.print(" = "+prod);
        }
        else
        System.out.println("NUMBER IS NOT PRIME");
    }
}
        