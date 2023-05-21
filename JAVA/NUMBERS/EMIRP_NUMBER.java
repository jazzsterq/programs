/*Emirp  number  is a number which is prime when read backwards and frontwards.
  Example : 13 
 */
package NUMBERS;
import java.util.*;
class EMIRP_NUMBER
    {
        static void main()
        {
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE NUMBER");
            int num=sa.nextInt();
            int n=0,m=0;
            for(int i=2;i<=num/2;i++)
            {
                if(num%i==0)
                {
                n=1;
                break;
            }
        
        int dig=1,rev=0;
        for(;num!=0;num/=10)
        {
            dig=num%10;
            rev=10*rev+dig;
        }
         for(int j=2;j<=rev/2;j++)
            {
                if(rev%j==0)
                {
                m=1;
                break;
            }
        }
        if(m==0&&n==0)
        System.out.println("EMIRP NUMBER");
        else
        System.out.println("NOT AN EMIRP NUMBER");
    }
}
}
