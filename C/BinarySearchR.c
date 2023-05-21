#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8};
    int val , left,right;
    val =5;
    left =0;
    right = 7;
    recSearch(a,left,right,val);
}
void recSearch(int b[],int l,int r,int x)
{
    int mid ;
    mid = (l+r)/2;
    if(b[mid]==x){
    printf("Found %d at %d",x,mid);
    return;
    }
    if(x<b[mid])
    recSearch(b,l,mid-1,x);
    if (x<b[mid])
    recSearch(b,mid+1,r,x);
}