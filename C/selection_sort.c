#include <stdio.h>
int main()
{
    int a[]={27,5,101,17,55,24};
    int min;
    int minIndex=0;
    for(int pass =0;pass<5;pass++)
    {
        int temp;
        min=a[pass];
        minIndex = pass;
        for(int j= pass+1;j<6;j++)
        {
            if(a[j]<min)
            {
                min = a[j];
                minIndex=j;
            }

        }

        temp = a[pass];
        a[pass] = a[minIndex];
        a[minIndex]=temp;

    }
    for(int i =0;i<6;i++)
    printf("%d  ",a[i]);
}