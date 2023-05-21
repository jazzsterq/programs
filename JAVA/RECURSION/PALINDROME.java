package RECURSION;
import java.util.*;
class PALINDROME
{
    static int rev=0,x;
    static void main()
    {
        Scanner sa =new Scanner(System.in);
        System.out.println("ENTER NUMBER");
        int n=sa.nextInt();
        boolean res= palin(n,n);
        System.out.println(res);
    }

    static boolean palin(int n,int dup)
    {
        if(n!=0)
        {
            x=n%10;
            rev=rev*10+x;
            palin(n/10,dup);
        }
        if(rev==dup)
            return true;
        else
            return false;
    }
}
