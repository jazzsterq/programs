package NUMBERS;
import java.util.*;
class KAPREKAR_NUMBER
{
    static void main()
    {
        int count=0,a,b,dup,sq,num;
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        num=sa.nextInt();
        dup=num;
        sq=num*num;
        for(;num!=0;num/=10)
            count++;
        a=sq/(int)Math.pow(10,count);
        b=sq%(int)Math.pow(10,count);
        if(a+b==dup)
            System.out.println("KAPREKAR NUMBER");
        else
            System.out.println("NOT A KAPREKAR NUMBER");
    }
}