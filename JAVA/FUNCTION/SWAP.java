package FUNCTION;
import java.util.*;
class SWAP
{
    public static void DO(int a,int b)
    {
        int c=a;
        a=b;
        b=c;
        System.out.println("NUMBERS AFTER SWAPING "+a+" , "+b);
    }
    
    public static void main()
    {
        SWAP ob=new SWAP();
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE TWO NUMBERS");
        int x=sa.nextInt();
        int y=sa.nextInt();
        System.out.println("NUMBERS BEFORE SWAPING "+x+" , "+y);
        ob.DO(x,y);//call by value 
    }
}