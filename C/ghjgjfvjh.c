#include<stdio.h>
int main(){
    int r1,c1;
    scanf("%d %d", &r1, &c1);
    int m1[r1][c1] ;
22
    // Take Input of Matrix
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            scanf("%d", (*(m1+i)+j));
        }
    }
    // Display Given Matrix
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("%d  ",*(*(m1+i)+j));
        }
        printf("\n");
    }

    // Defining pointer to center of matrix
    int *p1 = &m1[r1/2][c1/2];

    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            int r_sum = 0;    // defining row sum to zero
            for(int k=0; k<c1; k++){
                r_sum += *(p1-(c1/2)-(r1/2*c1)+k+(i*c1));    
            }
            // Convert to decimal number by multiplying 1.0
            float x = *(p1-(c1/2)-(r1/2*c1)+j+(i*c1))/(r_sum*1.0);
            printf("%.2f  ",x);
        }
        printf("\n");
    }
}