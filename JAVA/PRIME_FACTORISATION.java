import java.util.*;
class PRIME_FACTORISATION
{
    static int check=0;
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        int n=sa.nextInt();
        int dup=n;
        for(int j=2;j<=dup;)
        {            
            check=prime(j,n);
            if(check==0&&n%j==0)
            {
                n=n/j;
                System.out.print( j+",");
            }
            if(n%j!=0)
                j++;
        }
    }

    static int prime(int a,int n)
    {
        for( int i=2;i<=a/2;i++)
        {
            if(n%i==0)
            {
                check=1;//is not prime
            }
        }
        return check;
    }
}

