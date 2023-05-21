import java.util.*;
class OCTAL_TO_DECIMAL
    {
        static void main()
        {
            Scanner sa = new Scanner(System.in);
             System.out.println("ENTER THE NUMBER");
             long n=sa.nextLong();
             long dig=0,sum=0,i=0;
             for(;n!=0;n/=10)
             {
                 dig=n%10;
                 sum+=dig*Math.pow(8,i);
                 i++;
                }
                System.out.println(sum);
            }
        }
            