import java.util.*;
class HCF_LCM
{
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER 1 FOR HCF ");
        System.out.println("ENTER 2 FOR LCM");
        int v=sa.nextInt();
        System.out.println("ENTER THE TWO NUMBERS");
        int a,b,c=0,hcf,lcm;
        a=sa.nextInt();
        b=sa.nextInt();
        int d=a,d1=b;
        while(a%b!=0)
        {
            c=a%b;
            a=b;
            b=c;
        }
        hcf=b;
        lcm=(d*d1)/hcf;

        switch(v)
        {
            case 1:
            System.out.println("HCF:  "+hcf);
            break;
            case 2:
            System.out.println("LCM:  "+lcm);
            break;
            default:
            System.out.println("WRONG CHOICE");
        }
    }
}