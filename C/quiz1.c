#include<stdio.h>
int main()
{
    signed char a ;

    scanf("%c\n" ,&a);
    printf("The signed character is %c\n",a);
    printf("The equivalent numeric output is: %hhi\n",a);

    unsigned char b;
    scanf("%c\n:",&b);
    printf("The unsigned character is %c\n", b);
    printf("THe equivalent mumeric output being %hhu\n", b);
    

}