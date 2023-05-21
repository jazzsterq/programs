package RECURSION;
import java.util.*;
class PRIMORIAL
{
    static void main()
    {   
        Scanner sa =new Scanner(System.in);
        System.out.println("ENTER NUMBER");
        int n=sa.nextInt();
        for(int i=2;i<=n-6;i++)
        {
            if(primo(2,i)==true&&primo(2,i+2)==true&&primo(2,i+6)==true)
                System.out.println(i+" "+(i+2)+" "+(i+6));
            if(primo(2,i)==true&&primo(2,i+4)==true&&primo(2,i+6)==true)
                System.out.println(i+" "+(i+4)+" "+(i+6));
        }
    }

    static boolean primo(int j,int n)
    {
        if(j<=n/2)
        {
            if(n%j==0)
                return false;
            return(primo(j+1,n));
        }
        return true;
    }
}
