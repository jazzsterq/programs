#include <stdio.h>
#include <stdlib.h>

struct list{
    int d;
    struct list *next;
};
typedef struct list node;

int main(){

    int n;
    node *tmpnode , *head ,*oldnode ;
    scanf ("%d",&n);
    
    for (int i=1;i<=n;i++)
    {
        tmpnode = (node*)malloc (sizeof(node));
        int val;
        scanf("%d",&val);
        tmpnode->d = val;
        tmpnode->next = NULL;
        if(i==1) //create head node
        {
                head = tmpnode;
                oldnode = tmpnode ;
                continue;
        }
        oldnode->next = tmpnode ;
        oldnode = tmpnode ;
    }
    node *currnode ;
    currnode = head;
    for (int i=1;i<=n;i++)
    {
        printf("%d -> ",currnode->d);
        currnode = currnode->next;
    }

    

}