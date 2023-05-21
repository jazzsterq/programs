#include <stdio.h>
int isPalin(int,int);
int main()
{
    int num;
    printf("ENter the number");
    scanf("%d",&num);
    isPalin(num,0);

}

int isPalin(int n,int r)
{
    static int dup= n;
   
    int dig= dup%10;
    dup=dup/10;
    r= r*10+dig;
    if(dup==0)
    {
      if(r==n)
      printf("Palindrome");
      else
      printf("Not Palindrome");  
    }
    return isPalin(n,r);
    
}
