//TO CHEAK THE PRIME NUMBERS
package NUMBERS.RANGE;
import java.util.*;
    class PRIME_NUMBER_RANGE
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            int y;
            int p=0;
            System.out.println("ENTER THE RANGE");
            int n=sa.nextInt();//RANGE
            for(int j=2;j<=n;j++)
            {
               for( int i=2;i<=j/2;i++)
                {
                    y=j%i;
                    if(y==0)
                    {
                        p=1;
                       break; 
                        
                    }
                }
                if(p==0)
                System.out.print(j+",");
                p=0;
            }
        }
    }
