#include <stdio.h>
int main(){
  int a[5];  
  //int a[]= {3,4,5,6,6};
  int i,j;
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }

  for(j=0;j<5;j++)
  {
    printf("%d ",a[j]);
  }
}