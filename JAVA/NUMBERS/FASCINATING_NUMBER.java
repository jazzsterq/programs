package NUMBERS;
import java.util.*;
class FASCINATING_NUMBER
{
    static void main()
    {
        Scanner sa= new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        int a=sa.nextInt();
        int found=0;
        int b=a*2;
        int c=a*3;
        int num=a+b*1000+c*1000000;
        System.out.println(num);
        if(num>99&&num<334)
        {
            for(int i=1;i<=9;i++)
            {
                int dup=num;
                while(num!=0)
                {
                    if(num%10==i)
                    {
                        found++;
                        break;
                    }
                    num/=10;
                }
                num=dup;
            }
            System.out.println(found);
            if(found==9)
                System.out.println("FASCINATING NUMBER");
            else
                System.out.println("NOT");
        }
        else
            System.out.println("NOT");
    }
}