//TO CHEAK WEATHER THE NUMBER IS PRIME OR NOT
package NUMBERS;
import java.util.*;
class PRIME_NUMBER
{
    static void main()
    {
        int found=0;
        System.out.println("ENTER THE NUMBER");
        int n=new Scanner(System.in).nextInt();
        for( int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                found=1;
                break;
            }
        }
        if(found==1)
            System.out.println( n+" is a composite number");
        else
            System.out.println(n+" is a prime number");
    }
}

