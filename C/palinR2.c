#include <stdio.h>
int isPalin(int,int,int);
int main()
{
    int num;
    printf("ENter the number");
    scanf("%d",&num);
    isPalin(num,0,num);

}

int isPalin( int n,int r,int dup)
{
    int dig= dup%10;
    dup=dup/10;
    r= r*10+dig;
    if(dup==0)
    {
      if(r==n)
      printf("Palindrome");
      else
      printf("Not Palindrome");  
      return 0;
    }
    return isPalin(n,r,dup);
    
}