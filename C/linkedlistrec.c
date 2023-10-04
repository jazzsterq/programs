#include <stdio.h>
#include <stdlib.h>
typedef struct list{
    int data ;
    struct list* next ;
}node ;
node* create();
void print(node* head);
int main(){
    node *head;
    head = create ();
    print(head);
}
node* create()
{
    node* head = (node *)malloc (sizeof(node));
    head->next = NULL;
    int val;
    printf("Enter the data ");
    scanf("%d",&val);
    if(val==-1)
    return head;
    else
    
    head->data = val;
    
    head->next = create();
    return head;
}
void print(node* head)
{
    if(head->next==NULL)
    return;
    print(head->next);
    printf("%d ",head->data);
}
