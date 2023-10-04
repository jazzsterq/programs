#include<stdio.h>
int main()
{
    int row, col;
    printf("enter no of rows");
    scanf("%d", &row);
    printf("enter no. of col");
    scanf("%d", &col);
    int i,j;
    int M[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d", &M[i][j]);
        }
    }
    int *ptr = &M[row/2][col/2];
    
    for(i=1;i<=(row*col)/2;i++)
    {
       int c = *(ptr-i);
       *(ptr-i)= *(ptr +i);
       *(ptr+i) =c ;
    }


    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d  ", M[i][j]);
        }
        printf("\n");
    }
}














    /*for(i=0;i<=row/2;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==row/2 && j==col/2)
            break;
            int c = M[i][j];
            M[i][j] = M[row-i-1][col-j-1];
            M[row-i-1][col-j-1] = c ;
        }
    }*/
    
    
    
    