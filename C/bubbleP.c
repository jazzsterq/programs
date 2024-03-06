#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int isPrime(int n )
 {
   for (int i =2;i<=n/2;i++)
   {
       if(n%i==0)
           return 0;
   }
    return 1;
 }
int main() {

    int t ;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        int n ;
        int sum =0;
        scanf("%d",&n);
        for (int j=2;j<=n/2;)
        {
            if(isPrime(j)==1)
            {
                while(n%j==0)
                {    
                    sum+=j;
                    n=n/j;
                }
            }
                j++;
        }
        printf("%d",sum);
    
    return 0;
}