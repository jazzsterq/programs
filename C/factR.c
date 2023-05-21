#include <stdio.h>
int factR(int);
int main()
{ 
    int num;
    printf("Enter the number whose factorial is to be calculated ");
    scanf("%d",&num);
    printf("%d",factR(num));
}
int factR(int n){
   
    if(n==0)
    return 1;
    
    return n*factR(n-1);
//also print error message for -ve numbers
}