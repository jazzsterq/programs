package RECURSION;
import java.util.*;
class ARMSTRONG
{
    static int sum=0,x=0;
    static void main()
    {
        Scanner sa =new Scanner(System.in);
        System.out.println("ENTER NUMBER");
        int n=sa.nextInt();
        boolean res= arm(n,n);
        System.out.println(res);
    }

    static boolean arm(int n,int dup)
    {
        if(n!=0)
        {
            x=n%10;
            sum+=x*x*x;
            arm(n/10,dup);
        }
        if(sum==dup)
            return true;
        else
            return false;
    }
}
