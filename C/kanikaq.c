#include<stdio.h>
int main(){
    int row1,col1;
    printf("enter no of rows");

    scanf("%d", &row1);
    printf("enter no. of col");
    scanf("%d", &col1);

    int row2,col2;
    printf("enter no of rows");

    scanf("%d", &row2);
    printf("enter no. of col");
    scanf("%d", &col2);
    int i,j;

    int M[row1][col1];
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            scanf("%d", &M[i][j]);
        }
    }
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            printf("%d  ", M[i][j]);
        }
        printf("\n");
    }
    int p,q;
    int N[row2][col2];
    for(p=0;p<row2;p++){
        for(q=0;q<col2;q++){
            scanf("%d", &N[p][q]);
        }
    }
    for(p=0;p<row2;p++){
        for(q=0;q<col2;q++){
            printf("%d  ", N[p][q]);
        }
        printf("\n");
    }
    int x,y,z;
    int A[row1][col2];
    for(x=0;x<row1;x++){
        for(y=0;y<col2;y++){
            A[x][y]=0;
        }}

    int *p1 = &M[row1/2][col1/2];
    int *p2 = &N[row2/2][col2/2];
    for(x=0;x<row1;x++){
        for(y=0;y<col2;y++){
        
            for(z=0;z<row2;z++)//col1
            {
                A[x][y]+=*(p1-((row1*col1)/2)+col1*x+z) * *(p2+col2*z+y-((row2*col2)/2));
            }
        }
    }

    for(x=0;x<row1;x++){
        for(y=0;y<col2;y++){
        printf("%d  ", A[x][y]);
}printf("\n");
    }
    }
