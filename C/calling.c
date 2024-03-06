//cs101 12/04
#include <stdio.h>
int func(int );
void funcref(int *);// can also be void funcref(int *n);
void main()
{
    int num;
    num =34;
    printf("Number before func call %d\n", num);
    func(num);
    //num = func(num); just in case you want it to be changed
    printf("Number after call %d\n ",num);

    funcref(&num);
     printf("Number after call by reference %d\n ",num);
}

int func(int n)
{
    n++;
    printf("Number in function %d\n",n);
    return n;
}

void funcref(int *n)
{
    (*n)++;
    printf("Number in function %d\n",*n);
}