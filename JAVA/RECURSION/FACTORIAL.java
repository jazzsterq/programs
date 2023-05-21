package RECURSION;
import java.util.*;
class FACTORIAL
{
    static void main()
    {
        Scanner sa =new Scanner(System.in);
        System.out.println("ENTER NUMBER");
        int n=sa.nextInt();
        int fact= facto(n);
        System.out.println(fact);
    }
    static int facto(int n)
    {
        
        if(n>=1)
        {
            return n*facto(n-1);
        }
        return 1;
    }
}
