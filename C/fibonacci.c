#include <stdio.h>
void fibonacci(int n);
int main()
{
    int num;
    printf("Enter the number of terms in the fibonacci series");
    scanf("%d",&num);
    fibonacci(num);
}
void fibonacci(int n)
{
    if (n==0)
    return;
     static int a = -1;
     static int b= +1;
    int sum = a+b;
    printf("%d ",sum);
    a=b;
    b=sum;
    fibonacci(n-1);
}