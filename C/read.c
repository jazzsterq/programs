#include <stdio.h>
void printMatrix(int i , int j , int A[][3]);
void readMatrix(int i , int j , int A[][3])
{
   
    if(j==3)
    {
        i++;
        j=0;
        
    }
    if(i==3)
    return ;
    scanf("%d",&(A[i][j]));
    readMatrix(i,j+1,A);
    
    
    
}
void main()
{
    int A[3][3];
    readMatrix(0,0,A);
    printMatrix(0,0,A);
}

void printMatrix(int i , int j , int A[][3])
{
   
    if(j==3)
    {
        i++;
        j=0;
        printf("\n");
    }
    if(i==3)
    return ;
    printf("%d  ",A[i][j]);
    printMatrix(i,j+1,A);
    
    
    
}