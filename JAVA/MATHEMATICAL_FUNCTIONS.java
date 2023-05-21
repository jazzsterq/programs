import java.util.*;
class MATHEMATICAL_FUNCTIONS
{
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        double  n=sa.nextDouble();
        double  a=Math.sqrt(n);
        double  b=Math.pow(n,2);
        double  c=Math.abs(n);// return data type are int/long/float/double
        double  d=Math.round(n);//actually explicit conversion is done but return data type is int
        double  e=Math.floor(n); 
        double  f=Math.ceil(n);
        double  g=Math.random();
        double  h=Math.rint(n);
        System.out.println("SQUARE ROOT "+a);
        System.out.println("POWER "+b);
        System.out.println("ABSOULUTE "+c);
        System.out.println("ROUND "+d);
        System.out.println("FLOOR "+e);
        System.out.println("CEIL "+f);
        System.out.println("RANDOM "+g);
        System.out.println("RINT "+h);

    }
}

    