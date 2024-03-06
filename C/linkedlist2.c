#include<stdio.h>
#include<stdlib.h>
// we have made the node naming starting from 0 ,1 ,2 ....
typedef struct listnode{
    int data;
    struct listnode *next; // pointer to the structure itself , cannot use typedef name as it is not known until now 
 }node;
void printList(node *h);
node* createList();
void insertTail(node *h);
node* addAtHead(node *h);
void addAtHead2(node **h);
void deleteNode(node **h);
 void main(){
   
    node *head = createList();
    printList(head);
    insertTail(head);
    printList(head);
    head = addAtHead(head);
    printList(head);
    addAtHead2(&head);
    printList(head);
    deleteNode(&head);
    printList(head);
}
void printList(node *h)
{
    //print list 
    node * curnode;
   curnode =h;
   while(curnode != NULL){
    printf("%d --> ",curnode->data);
    curnode = curnode->next;
   }
   printf("\n");
}
node* createList()
{
   int numnodes,a;
   node *tmp,*oldnode,*head,*currnode,*nextnode;
   head = NULL;   // always check boundary problems
   printf("enter the number of nodes");
   scanf("%d",&numnodes);
   
   for (int i = 0; i < numnodes; i++)
   {
    printf("enter the %dth element : ",i);
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
   return head;
}
void insertTail(node *h)
{
    node * curnode,*tmp;
    int a;
    printf("enter a number to be inserted at the tail : ");
    scanf("%d",&a);
    tmp =(node*)malloc(sizeof(node));
    tmp->data =a;
    tmp->next = NULL;
   curnode =h;
   while(curnode->next!= NULL){
    curnode = curnode->next;
   }
   curnode -> next = tmp;
}

node* addAtHead(node *h) //going by value for h , by reference for structure it is pointing to
{
    node *tmp;
    int a;
    printf("enter a number to be added at head: ");
    scanf("%d",&a);
    tmp =(node*)malloc(sizeof(node));
    tmp->data =a;
    tmp->next = h;


    return tmp;
}

void addAtHead2(node **h)
{
   node *tmp;
    int a;
    printf("enter a number to be added at head: ");
    scanf("%d",&a);
    tmp =(node*)malloc(sizeof(node));
    tmp->data =a;
    tmp->next = *h;

    *h=tmp;
}

void deleteNode(node **h)
{ // also check corner cases , not done here , basically the ones where the input is like 0 and all have to be taken care of 
    printf("Enter the position of the node to be deleted ");
    int pos;
    scanf("%d",&pos);
    if (pos <0)return;
    node *cur = *h;
    if (pos==0) // delete the head node 
    {
        (*h) = cur -> next ;
        free(cur);
        
    }
    else
    {
        for (int i=0;(i<pos-1)&&(cur->next != NULL);i++)//cur->next != NULL as agr pos no. of nodes in the list se bda ho jaaye to dikkat nhi ho...
        cur = cur -> next;
        node *todelete = cur -> next ;
        if(todelete ) //that is not equal to null
        {
        cur -> next =  todelete -> next;
        free (todelete);
        }
        else cur -> next = NULL;
    }
}