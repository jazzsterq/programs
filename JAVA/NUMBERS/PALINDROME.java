//PALINDROME
package NUMBERS;
import java.io.*;
    class PALINDROME
    {   
        static void main()throws IOException
        {
            int x,rev=0,d;
            System.out.println("ENTER THE NUMBER");
            int num=Integer.parseInt(new BufferedReader(new InputStreamReader(System.in)).readLine());
            d=num;
            for(;num!=0;num/=10)
            {
                x=num%10;
                rev=rev*10+x;
            }
            if(d==rev)
            System.out.println("IT IS A PALINDROME NUMBER");
            else
            System.out.println("IT IS NOT A PALINDROME NUMBER");
        }
    }
