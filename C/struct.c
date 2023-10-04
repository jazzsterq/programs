#include <stdio.h>
struct date{
    int day;
    int month;
    int year;
};

struct student{
    //can be defined inside too 
    char name[20];
    int marks;
    struct date dob; //dob is variable
    //if we define struct date in struct student then it can't be accessed elsewhere withour redeclaration so, we declared it globally and then used it in struct student
};

void main(){
    int i,j;
    struct student s1;
    printf("enter name: ");
    scanf("%s",s1.name);
    printf("enter marks: ");
    scanf("%d",&s1.marks);
    printf("%s ",s1.name);
    printf("%d\n",s1.marks);
    printf("enter the day: ");
    scanf("%d",&s1.dob.day);
    printf("the day is: %d\n",s1.dob.day);
    s1.dob.year=2004;
    printf("the year is: %d\n",s1.dob.year);
    struct date dob={"monday","april",2004};
    printf("the dob is: %s,%s,%d",dob.day,dob.month,dob.year);
    
    
    
}