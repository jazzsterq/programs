package STRING;
import java.util.*;
class BOOLEAN_FUNCTIONS
{
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        if(sa.hasNextInt())
        {
            int a=sa.nextInt();
            System.out.println(a+ " IS AN INTEGER");
        }
        else if(sa.hasNextDouble())
        {
            double a=sa.nextDouble();
            System.out.println(a+" IS A DECIMAL NUMBER");
        }
        else
        { 
            System.out.println("IS NOT A NUMBER");
        }
    }
}