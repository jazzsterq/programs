package CONSTRUCTOR;
import java.util.*;
class PERIMETER
{
    public static void PERIMETER(int a)
    {
        System.out.println("LEGNTH OF SIDE "+ a);
        System.out.println("PERIMETER OF SQUARE "+(4*a));
    }

    public static void PERIMETER(int l,int b)
    {
        System.out.println("LEGNTH AND BREDTH "+ l+","+b);
        System.out.println("PERIMETER OF RECTANGLE "+(2*(l+b)));
    }

    public static void PERIMETER(double r)
    {
        System.out.println("RADIUS "+ r);
        System.out.println("CIRCUMFERENCE OF CIRCLE "+(2*3.14*r));
    }

    public static void main()
    {
        PERIMETER sa1=new PERIMETER();
        PERIMETER sa2=new PERIMETER();
        PERIMETER sa3=new PERIMETER();
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE SIDE OF SQUARE");
        int a=sa.nextInt();
        System.out.println("ENTER THE SIDES OF RECTANGLE");
        int l=sa.nextInt();
        int b=sa.nextInt();
        System.out.println("ENTER THE RADIUS OF CIRCLE");
        double r=sa.nextDouble();
        sa1.PERIMETER(a);
        sa2.PERIMETER(l,b);
        sa3.PERIMETER(r);
    }
}

        