#include <stdio.h>
int main()
{
    for(int num =2;num<=50;num++) //the range
    {
        int check = 0;
        for (int factor = 2; factor <= num/2 ; factor++) 
        // as number ka factor max. uska aadha ho skta hai , think... , 
        //agr smjh aa jaaye to think ki max. uska root ho skta hai like 9 ka 3
        {
            if (num %factor == 0) //  checking if factor is a factor of the number
               {
                check = 1;
                break ; // kyunki ek bhi factor mil gya to nhi hai prime , no need to check aage
               }
        }
        if (check == 0 ) // that is number is prime as there were no factors 
        printf("%d  ",num);
    }
}