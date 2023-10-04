#include <stdio.h>
#include <stdlib.h>
typedef struct dLinkedList{
    int data;
    struct dLinkedList *left;
    struct dLinkedList *right;
}dNode;

void main()
{
    dNode *head;
    createList(&head);
    printList(head);
}
void createList(dNode **h)
{
   int numnodes,a;
   dNode *tmp,*oldnode,*currnode,*nextnode;
   *h = NULL;   // always check boundary problems
   printf("enter the number of nodes");
   scanf("%d",&numnodes);
   if(numnodes<=0)return ;
   for (int i = 0; i < numnodes; i++)
   {
    printf("enter the %dth element : ",i);
    scanf("%d",&a);
    tmp =(dNode*)malloc(sizeof(dNode));
    tmp->data =a;
    tmp->right = NULL;
    tmp->left = NULL;
   if (i==0)//head node
   {
    oldnode = *h = tmp;
   }
   else 
   {
     oldnode->right = tmp;//connect with previous node
     oldnode->left = oldnode;
     oldnode =tmp; //rename yourself as old node 
   }
   
   }
}

void printListHead()
{
    
}

