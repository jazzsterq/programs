import java.util.*;
class OCTAL_TO_BINARY
    {
        public static void main()
        {   int dig,sum=0,base=1,dig1,bin=0;
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER A OCTAL NUMBER");
            int n=sa.nextInt();
            int count =0;
            for(;n!=0;n/=10)
            {
                sum=0;
                dig=n%10;
                for(;dig!=0;dig/=2)
                {
                    dig1=dig%2;
                    sum+=dig1*base;
                    base*=10;
                }
                bin+=sum*Math.pow(1000,count);
                base=1;
                count++;
            }
            System.out.println("BINARY  "+bin);
        }
    }
                