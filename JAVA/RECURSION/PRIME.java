package RECURSION;
import java.util.*;
class PRIME
{
    static void main()
    {
        Scanner sa =new Scanner(System.in);
        System.out.println("ENTER NUMBER");
        int n=sa.nextInt();
        boolean res= prime(2,n);
        System.out.println(res);
    }

    static boolean prime(int j,int n)
    {
        if(j<=n/2)
        {
            if(n%j==0)
            {
                return false;
            }
            return(prime(j+1,n));
        }
        return true;
    }
}
