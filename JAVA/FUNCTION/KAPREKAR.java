package FUNCTION;
import java.util.*;
class KAPREKAR
{
    static int count=0,a,b,dup,sq,num;
    static void accept()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        num=sa.nextInt();
    }

    static void calculate()
    {
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
    
    static void main()
    {
        KAPREKAR ob=new KAPREKAR();
        ob.accept();
        ob.calculate();
    }
}