#include<stdio.h>
#include<stdlib.h>
typedef struct nodeinfo {
    int data ;
    struct nodeinfo* next;
}node;
node* create(int);
void print(node*);

int main(){
    node* head;
    int num;
    scanf("%d",&num);
    head = create(num);
    print(head);
    return 0;
}

node* create(int num){
    if (num>0){
    node* head;
    head = (node*)malloc(sizeof(node));
    head->next =NULL;
    scanf("%d",&head->data);
    head->next = create(num-1);
    return head;
    }
    else{
        return NULL;
    }

}

void print(node* head){
    node* currnode;
    currnode =  head;
    while(currnode != NULL){
        printf("%d\n",currnode->data);
        currnode = currnode->next;
    }
}