#include<stdio.h>
#include<string.h>
#include<stdlib.h>

enum boolean {false,true};
enum boolean matched=true;

//declaring our function named isPalindrome
enum boolean isPalindrome(char string[])
{
    int left,right,len;
    len=strlen(string);
    if(len=0){
        return true;
        }
    left=0;
    right=len-1;
    while(left<right && matched)
    {
        if(string[left]!=string[right]){
            matched=false;
    //if matched goes false, then while loop condition becomes false thus we go out of it...and reach the else statement
        }
        else{
            left++;
            right--;
        }
    }
    return matched;
}

void main(){
char string[40];
printf("program to test the given string is palindrome\n");
printf("enter the string: ");
scanf("%s",string);
matched = isPalindrome(string);
if(matched==true){
    printf("the given string %s is a palindrome\n",string);
}
else{
    printf("the given string %s is not a palindrome\n",string);
}

}