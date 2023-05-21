// TO CHEAK IF SQUARE OF NUMBER(LET A) AND REVERSE OF SQUARE OF REVERSE OF A ARE SAME
// HINT! 12^2=144,21^2=441    144 AND REVERSE OF 441 ARE EQUAL HENCE IS MIRROR SQUARE
package NUMBERS;
import java.io.*;
class MIRROR_SQUARE
{
    public static void main()throws IOException
        {
            int x,rev=0,d,sd,s=0;
            System.out.println("ENTER THE NUMBER");
            int num=Integer.parseInt(new BufferedReader(new InputStreamReader(System.in)).readLine());
            d=num;
            for(;d!=0;d/=10)
            {
                x=d%10;
                rev=rev*10+x;
            }
                num=num*num;
             rev=rev*rev;
            
            for(;num!=0;num/=10)
            {
               int xs=num%10;
                s=s*10+xs;
            }
            if(s==rev)
            System.out.println("IT IS A MIRROR SQUARE");
            else
            System.out.println("IT IS NOT A MIRROR SQUARE");
            }
        }
            
            
        
            
                