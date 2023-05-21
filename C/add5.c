#include <stdio.h>
int addR(int sum);
void main()
{
    int a;
    printf("ENter the range");
    scanf("%d",&a);
    int m = addR(a);
   printf("%d",m);
}
int addR(int n){
   
    if(n==0)
    return 0;
    /*
    int sum=0;
    sum= n+ addR(n-1);
    return sum; */
    return n+addR(n-1);

}
