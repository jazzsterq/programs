//TO CHEAK WEATHER THE NUMBER IS PRIME &PALINDROME
package NUMBERS;
import java.util.*;
class PRIME_PALINDROME
    {
        static void main()
        {
            int y;
            int p=0;
            System.out.println("ENTER THE NUMBER");
            int n=new Scanner(System.in).nextInt();
            int d=n,x=0,rev=0;
            for( int i=2;i<=n/2;i++)
            {
                y=n%i;
                if(y==0)
                {
                    p=1;
                    break;
                }
            }
            while(n!=0)
            {
                x=n%10;
                rev=rev*10+x;
                n/=10;
            }
           
            if(p==0&&rev==d)
            System.out.println( " PRIME PALINDROME");
            else
            System.out.println("NOT A PRIME PALINDROME");
        }
    }


