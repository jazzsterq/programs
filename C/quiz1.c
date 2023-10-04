#include<stdio.h>
int main()
{
  char aa[3];
  scanf("%s",aa); // or   scanf("%s",&a[0]);
  printf("%s",aa); // or printf("%s",&a[0]);
  
  
  
  
  
  
  int *p1, *p2, a, b;  char c[4];  
  a =5; 
  b =5;
  p1=&a;
  p2=&a;
  printf("\np1 < p2 gives: %d", p1 < p2);  
  printf("\np1 > p2 gives: %d", p1 > p2);  
  printf("\np1 = p2 gives: %d", p1 == p2);



  //When passing two-dimensional arrays, it is not mandatory to specify the number of rows in the array. However, the number of columns should always be specified.
/*void displayNumbers(int num[][2]) {
  // code
}
void displayNumbers(int num[2][2]) {
  printf("Displaying:\n");
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 2; ++j) {
      printf("%d\n", num[i][j]); 
      
    BOTH WORKS
      
      
      */
}