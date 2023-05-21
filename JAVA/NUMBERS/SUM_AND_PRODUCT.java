/*A number is such that when the sum of its digits is added to the product of its digits , the result is equal to original number
Example : 59
5+9 = 14
5*9 = 45
14+45=59
A number is such that when the sum of its digits is equal to product of its digits,it is spy number
Example : 1124
1+1+2+4=8
1*1*2*4=8
A number is such that when the sum of its digits is multiplied with product of its digits , the result is equal to original number
Example : 135
1+3+5 = 9
1*3*5= 15
9*15=135
 */
package NUMBERS;
import java.util.*;
class SUM_AND_PRODUCT
{
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        int num=sa.nextInt();
        int sum=0,prod=1,dup=num,dig;
        for(;num!=0;num/=10)
        {
            dig=num%10;
            sum=sum+dig;
            prod=prod*dig;
        }
        if(sum==prod)
            System.out.println("SPY NUMBER");
        else if(sum*prod==dup)
            System.out.println("SUM PRODUCT(*) NUMBER");
        else if(sum+prod==dup)
            System.out.println("SUM PRODUCT(+) NUMBER");
        else
            System.out.println("NONE");
    }
}

