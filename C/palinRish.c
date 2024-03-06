#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//enum is a data type you declare on your own...

int main()
{
int i;
int n;
char string[40];

//declaring array of 40 characters
printf("enter your string: ");
scanf("%s",string);
//string don't need the '&' dereference operator as simply writing %s and array name automatically returns the address of the first element of the array of char
n=strlen(string);
i=0;
while(i<n){
    if(string[i]==string[n-i-1]){
            i++;
    }
    else{
        printf("not a palindrome");
        break;
    }


}
printf("matched!!");

}
//can be used instead of void or int main!