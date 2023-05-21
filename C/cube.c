//CS101 class 1 12/05
#include <stdio.h>
void myCube(int); //Function declaration
int myCube2(int );
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int ans = num*num*num;
    printf("Cube %d\n",ans);

    myCube(num);
    int ans2 = myCube2(num); 
    myCube2(num); // Since not assigned it will be discarded
    printf("Cube for function cube 2 %d",ans2);
}

//function definition
void myCube(int a)
{
    int ans;
    ans = a*a*a;
    printf("INSIDE function %d\n",ans);
}

int myCube2(int a)
{
    return a*a*a;
}