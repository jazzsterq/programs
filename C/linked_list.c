#include<stdio.h>
#include<stdlib.h>
typedef struct listnode{
    int data;
    struct listnode *next; // pointer to the structure itself , cannot use typedef name as it is not known until now 
 }node;

int main(){
   int numnodes,a;
   node *tmp,*oldnode,*head,*currnode,*nextnode;
   printf("enter the number of nodes");
   scanf("%d",&numnodes);
   
   for (int i = 0; i < numnodes; i++)
   {
    printf("enter a number");
    scanf("%d",&a);
    tmp =(node*)malloc(sizeof(node));
    tmp->data =a;
    tmp->next = NULL;
   
   if (i==0)//head node
   {
    head = tmp;
    oldnode = tmp;
   }
   else 
   {
     oldnode->next = tmp;//connect with previous node
     oldnode =tmp; //rename yourself as old node 
   }
   
   }

   //print list 
   currnode =head;
   for(int i=0;i<numnodes;i++){
    printf("%d\n",currnode->data);
    currnode = currnode->next;
   }
   
    return 0;
}