import java.util.*;
class TRIBONACCI
    {
        public static void main(String[] args)
        {
            System.out.println("ENTER THE RANGE");
            int n= new Scanner(System.in).nextInt(); 
            int a=-1,b=0,c=1,d=0;
            for( int i=1;i<=n;i++)
            {
                d=a+b+c;
                a=b;
                b=c;
                c=d;
                System.out.print(c+"\t");
            }
        }
    }