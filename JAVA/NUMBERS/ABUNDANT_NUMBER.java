package NUMBERS;
import java.util.*;
class ABUNDANT_NUMBER
{
    public static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        int num=sa.nextInt();
        int sum=0;
        for(int i=1;i<=num/2;i++)
        {
            if(num%i==0)
                sum=sum+i;
        }
        if(sum>num)
            System.out.println("ABUNDANT NUMBER");
        else
            System.out.println("NOT AN ABUNDANT NUMBER");
    }
}
// if number>its factors sum

                