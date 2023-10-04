#include <stdio.h>
typedef struct node {
    int data ;
    struct node *next;
}queue;

int main()
{
    queue *front , *rear ;
    front = NULL;
    rear  = NULL ;
    enqueue ()
}

void enqueue (queue **f,int val)
{
    queue *tmp;
    tmp = (queue *)malloc (sizeof(queue));
    tmp ->data = val;
    tmp ->next = *f;
    *f = tmp;

}
