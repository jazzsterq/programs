// WAP FOR COMPOUND INTREST
import java.util.*;
class COMPOUND_INTREST
    {
        public static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE VALUES OF P,R,N");
            double p=sa.nextDouble();
            double r=sa.nextDouble();
            double n=sa.nextDouble();
            double ci=(p*Math.pow(1+r/100,n))-p;
            System.out.println("COMPOUND INTREST"+ci);
        }
    }