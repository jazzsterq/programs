import java.util.*;
class LEAP_YEAR
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE YEAR");
            int year=sa.nextInt();
            if((year% 400==0)||((year%100!=0)&&(year%4==0)))
            System.out.println("LEAP YEAR");
            else
            System.out.println("NOT A LEAP YEAR");
        }
    }
            
  
