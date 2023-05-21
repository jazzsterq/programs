package NUMBERS.RANGE;
import java.util.*;
class PRONIC_NUMBER_RANGE
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int a=sa.nextInt();
            int mul=1,c=0;
            for(int num=1;num<=a;num++)
            {
            for(int i=1;i*(i+1)<=num;i++)
            {
             mul=i*(i+1);
             if(mul==num)
             {
                 c=1;
                 break;
                } 
            }
            if(c==1)
            System.out.print(num+",");
            c=0;
          
        }
    }
}