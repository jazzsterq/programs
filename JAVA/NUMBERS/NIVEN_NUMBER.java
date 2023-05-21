/*Niven Number is an integer that is divisible by the sum of its digits.
 For Example :12,18
 */
package NUMBERS;
import java.util.*;
class NIVEN_NUMBER
 {
     static void main ()
     { 
         Scanner sa=new Scanner(System.in);
         System.out.println("ENTER THE NUMBER");
         int num=sa.nextInt();
         int d=num,dig=0,sum=0;
          do
         {
           dig=num%10;
           sum+=dig;
           num/=10;
         }
         while(num!=0);
        if(d%sum==0)
        System.out.println("NIVEN NUMBER");
        else
        System.out.println("NOT A NIVEN NUMBER");
    }
}