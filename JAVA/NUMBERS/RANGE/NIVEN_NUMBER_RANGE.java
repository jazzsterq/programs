/*Niven Number is an integer that is divisible by the sum of its digits.
 For Example :12,18
 */
package NUMBERS.RANGE;
import java.util.*;
class NIVEN_NUMBER_RANGE
 {
     static void main ()
     { 
         Scanner sa=new Scanner(System.in);
         System.out.println("ENTER THE NUMBER");
         int a=sa.nextInt();
         int d, dig=0,sum=0;
         for(int num=1;num<a;num++)
         {d=num;
         while(d!=0)
         {
           dig=d%10;
           sum+=dig;
           d/=10;
        }
        if(num%sum==0)
        System.out.print(num+",");
        sum=0;
        dig=0;
    }
}
}