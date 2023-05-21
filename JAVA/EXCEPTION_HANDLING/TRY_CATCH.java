package EXCEPTION_HANDLING;

import java.util.*;
class TRY_CATCH
{
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE TWO NUMBERS");
        int a=sa.nextInt();
        int b=sa.nextInt();
        try
        {
            System.out.println(a/b);
        }
        catch(Exception s)
        {
            System.out.println("ERROR");
        }
    }
}
//Exception is for all types of errors,we can also use ArithmeticException,StringIndexOutofBoundsException 