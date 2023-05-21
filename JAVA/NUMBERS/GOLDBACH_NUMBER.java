package NUMBERS;
import java.util.*;
class GOLDBACH_NUMBER
{
    public static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        int n=sa.nextInt();
        if(n>9&&n<50&&n%2==0)
        {
            for(int i=3;i<n;i++)
            {
                if(checkprime(i))
                {
                    for(int j=i;j<n;j++)
                    {
                        if(checkprime(j)&&i+j==n)
                        {
                            System.out.println(i+"+"+j);
                            break;
                        }
                    }
                }
            }
        }
        else
        System.out.println("INVALID INPUT");
    }

    static boolean checkprime(int a)
    {
        for(int i=2;i<=a/2;i++)
        {
            if(a%i==0)
                return false;
        }
        return true;
    }
}
