#include<stdio.h>
#include<stdlib.h>
typedef struct dlistnode{
    int val;
    struct dlistnode *next;
    struct dlistnode *prev;
    
}dnode;


void createlist(dnode**,dnode**);
void printlist(dnode**);

int main(){
    dnode *head;
    dnode *tail;
    createlist(&head,&tail);
    printlist(&head);
}

void createlist(dnode **h,dnode** t){
    printf("enter the number of nodes to form\n");
    int num_nodes;
    scanf("%d",&num_nodes);
    dnode *tmp,*finalnode;
    finalnode = (dnode*)malloc(sizeof(dnode*));
    for (int i= 0;i<num_nodes;i++){
        tmp = (dnode*)malloc(sizeof(dnode*));
        printf("enter the value for %d node: ",i+1);
        scanf("%d",&tmp->val);
        printf(" %d\n",tmp->val);
        if (i ==0){
            
            *h= tmp;
            (*h)->prev = NULL;
            (*h)->next=NULL;
            finalnode = *h;
            
        }
       
        else if (i==num_nodes-1){
            tmp->next= NULL;
            tmp->prev = finalnode;
            *t = tmp;
            finalnode->next = *t;
                }
        else {
            finalnode->next = tmp;
            tmp->prev =finalnode;
            finalnode = tmp;
            tmp->next=NULL;
            printf("ss");
        }
    }

}
void printlist(dnode** h){
    // printing
    dnode *currnode;
    currnode  = *h;
    for(int i=0;i<6;i++){
        printf("%d\n",currnode->val);
        currnode = currnode->next;
        
    } 

     }