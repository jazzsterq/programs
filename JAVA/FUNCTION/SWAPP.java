package FUNCTION;
import java.util.*;
class SWAPP
{
    static int x,y;    
    public static void DO(SWAPP S)
    {
        int c=S.x;
        S.x=S.y;
        S.y=c;
        System.out.println("NUMBERS AFTER SWAPING "+S.x+" , "+S.y);
    }

    public static void main()
    {
        SWAPP ob=new SWAPP();
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE TWO NUMBERS");
        ob.x=sa.nextInt();
        ob.y=sa.nextInt();
        System.out.println("NUMBERS BEFORE SWAPING "+ob.x+" , "+ob.y);
        DO(ob);//call by reference
    }
}
