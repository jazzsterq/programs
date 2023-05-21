import java.util.*;
class PRIME_FACTORISATION2
{
    public static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        int n=sa.nextInt();
        int dup=n;
        for(int j=2;j<=dup;)
        {
            int check=0;
            for( int i=2;i<=j/2;i++)
            {
                if(n%i==0)
                {
                    check=1;
                }
            }
            if(check==0&&n%j==0)
            {
                n=n/j;
                System.out.print( j+",");
            }
            if(n%j!=0)
                j++;
        }
    }
}

