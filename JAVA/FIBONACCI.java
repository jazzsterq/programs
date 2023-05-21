import java.util.*;
class FIBONACCI
    {
        static void main()
        {
            System.out.println("ENTER THE RANGE");
            int n= new Scanner(System.in).nextInt(); 
            String a="a",b="b",c="ba";
            for( int i=1;i<=n;i++)
            {
                a=b;
                b=c;
                c=b+a;
                System.out.print(c+"\t");
            }
        }
    }