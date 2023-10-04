#include <stdio.h>
#include <stdlib.h>

int main ()
{
  /*  char *name;
    name="John";
    printf("%s",name);
    printf("%c",*name);

    //way 2
    char *name2;
    char c = 'A';
    name2 = &c;

    // To store names of students and print them j
    // way 1 : do a 2D array of type char and do the job
    char name3[3][10];
    scanf("%c",&name3[1][0]);
    scanf("%s",name3[0]);   
    printf("%s\n",name3[0]);
    printf("%c",name3[1][0]);
*/

  /*char *nameList[3][7]; //array of pointers pointing to char type   , don't doooo , but works though

    scanf("%s",nameList[0]);   
    printf("%s\n",nameList[0]);*/
/*
    char *nameList[3]; //array of pointers pointing to char type
    nameList[0]=(char*) malloc(10* sizeof (char));
    scanf("%s",nameList[0]);   
    printf("%s\n",nameList[0]);*/



// segementation fault : when memory allocated related problems arise

 int n;
 scanf("%d",&n);
 int a[n][n];
 for (int i=0;i<n;i++)
 for(int j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for (int i=0;i<n;i++)
 for(int j=0;j<n;j++)
    printf("%d\n",a[i][j]);
}