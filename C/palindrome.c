#include <stdio.h>
#include <string.h>
int isPalindrome(char s[]);
int main()
{   
    char a[20];
    scanf("%s",a);
    if(isPalindrome(a))
    printf("YES");
    else
    printf("NO");
}
int isPalindrome(char s[])
{
    int left , right;
    left =0;
    right =strlen(s); //returns the length without the terminating value , als
    while(left<right)
    {
        if(s[left]!=s[right])
        return 0;
        left++;
        right--;
    }
    return 1;
}
