package NUMBERS;
import java.util.*;
class DEFICIT_NUMBER
    {
        public static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int num=sa.nextInt();
            int sum=0;
            for(int i=1;i<=num/2;i++)
            {
                if(num%i==0)
                sum=sum+i;
            }
            if(sum<num)
            System.out.println("DEFICIT NUMBER");
            else
            System.out.println("NOT A DEFICIT NUMBER");
        }
    }
                
                