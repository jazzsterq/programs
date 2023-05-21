#include <stdio.h>
int main()
{
    int a ;
    int *myPtr;
    int **myPtrPtr;
    myPtrPtr = &myPtr;
    myPtr = &a;
    scanf("%d ",&a);
    scanf("%d ",myPtr);
    scanf("%d",*myPtrPtr);
    printf("%d ",a);
    printf("%d ",*myPtr);
    printf("%d ",**myPtrPtr);    
}   