//TO REVERSE DIGITS OF A NUMBER
import java.io.*;
    class REVERSE_DIGITS
    {   
        static void main()throws IOException
        {
            int x,rev=0;
            System.out.println("ENTER THE NUMBER");
            int num=Integer.parseInt(new BufferedReader(new InputStreamReader(System.in)).readLine());
            for(;num!=0;num/=10)
            {
                x=num%10;
                rev=rev*10+x;
            }
            System.out.println("reverse:  "+rev);
        }
    }
