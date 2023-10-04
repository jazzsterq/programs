#include<stdio.h>
#include<stdlib.h>
typedef struct listnode{
    int data;
    struct listnode *next;
 }node;
 int findmin(node *h);
 node* createList(int numnodes);
 void combine(node **h,int pos);
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
 int main ()
{
    int t ;
    scanf("%d",&t);
    for(int zz=0;zz<t;zz++)
    {
        int num;
        scanf("%d",&num);
        node *head = createList(num);
        printList(head);
       while ((head->next)!=NULL)
        {
           int min = findmin(head);
           combine(&head,min);
           printList(head);
        }
        printf("%d \n",head->data);
    }
}
node* createList(int numnodes)
{
   int a;
   node *tmp,*oldnode,*head,*currnode,*nextnode;
   head = NULL;
   
   
   for (int i = 0; i < numnodes; i++)
   {
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

int findmin(node *h)
{
    int min = h->data;
    int pos =0;
    int count =1;
    node *curnode = h->next;
    while ((curnode->next)!=NULL)
    {
        if((curnode->data)<=min)
        {
            min = curnode->data;
            pos=count;
            
        }
        count++;
        curnode = curnode->next;
    }
    if((curnode->data)<min)
    {
        min = curnode->data;
            pos=count;
    }

    return pos;
}


void combine(node **h,int pos)
{
    printf("%d  \n",pos);
    if (pos <0)
    return;
    node *cur = *h;
    if (pos==0)
    {
        (*h) = cur -> next ;
        free(cur);
        
    }
    else if(pos==1)
    {
        node* todelete = cur;
        cur->next =  todelete -> next -> next;
        int val = todelete->data;
        cur->data += val;
        free (todelete);
        free (todelete->next);
    }
    else
    {
        for (int i=0;(i<pos-2)&&(cur->next != NULL);i++)
        cur = cur -> next;
        node *todelete;
         todelete = cur -> next ;
        int val = todelete->data;
        if(todelete!=NULL && todelete->next->next!=NULL) //that is not equal to null
        {
        cur -> next =  todelete -> next -> next;
        todelete -> next -> next->data += val;
        free (todelete);
        free (todelete->next);
        }
        else if(todelete->next->next==NULL)
        {
            cur -> next->next = NULL;
            free(todelete->next);
        }
        else 
        cur -> next = NULL;
    }
}