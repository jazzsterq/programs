#include <stdio.h>
void main(int argc , char **argv)
{
    printf("main recieved %d arguments/n",argc);
    for(int i=0;i<=argc;i++)
    {
        printf("%s",argv[i]);
    }
}