#include <stdio.h> 
#include <stdlib.h> 

typedef struct node {
  int bin;
  int pbin;
  struct node *ptr;
}node;
node* read_bin_num();
int get_element(node* c, int last);
node* add_bin_num(node* a , node* b);
void printList(node *h);


int main()
{
  node* numa , *numb , *add;
  numa = read_bin_num();
  numb = read_bin_num();
  printList(numa);
  printf("\n");
  printList(numb);
  printf("\n");
  add = add_bin_num(numa , numb);
  printList(add);
  
}

node* read_bin_num() 
{ 

  int a; 

  node *tmp, *head, *oldnode ; 

  for(int i=1 ; ; i++) 
  {  
    scanf("%d", &a); 
    if(a==1)   
    {
      return head;
    }
    
       tmp = (node*) malloc(sizeof(node));  
       tmp->bin = a; 
       tmp->ptr = NULL; 
       tmp->pbin = i; 
      
    if(i==1) // create the HEAD node 
    { 
        head = tmp; 
        oldnode = tmp; 
    } 

    else // create the other nodes of the list 
    { 

       
       oldnode->ptr = tmp; // connect with previous node 
       oldnode = tmp;       // rename yourself as the oldnode 
    } 
    
  } 
  
} 

int get_element(node *c, int last)
{
 if(last<=0)
 return 0;
 node *currnode;
 currnode = c;
 
 for(int i=1;i<last;i++)
 {
   currnode=currnode->ptr;
 }
  return currnode->bin;
}

node* add_bin_num(node* a , node* b){
  node* tmpnode , *old , *top;
  int paddB = 0 , paddA = 0;
  int take=0 , add=0 , bina , binb;
  int i=1;
  
  tmpnode = a;
  while (tmpnode!=NULL)
  {
   paddA = tmpnode->pbin;
   tmpnode = tmpnode->ptr;
  }
  
  tmpnode = b;
  while (tmpnode!=NULL)
  {
   paddB = tmpnode->pbin;
   tmpnode = tmpnode->ptr;
  }
  
  while (paddA!=0)
  {
    bina = get_element(a , paddA);
    binb = get_element(b , paddB);
    add = bina + binb + take;
    paddA--;
    paddB--;
    if(add==1)
    {
      take=0;
    }
    else if(add==2)
    {
      add=0;
      take=1;
    }
    else if(add==3)
    {
      add=1;
      take=1;
    }
    
    tmpnode = (node*)malloc(sizeof(node));
    tmpnode->bin = add;
    tmpnode->ptr = NULL;
    tmpnode->pbin = i;
    
    if(i==1)
    {
      top = tmpnode;
      old = tmpnode;
    }
    else
    {
      tmpnode->ptr = old;
      old = tmpnode;
      top = tmpnode;
    }
   i++;
  }
  if(take==1)
  {
    tmpnode = (node*)malloc(sizeof(node));
    tmpnode->bin = 1;
    tmpnode->ptr = NULL;
    tmpnode->pbin = i;
    tmpnode->ptr = old;
    old = tmpnode;
    top = tmpnode;
    
  }
  return top;
}

void printList(node *h) 
{ 
   node *curnode; 

   int i; 

   // print the list 

   curnode = h; 
   printf("Printing the list contents==\n"); 
   while(curnode != NULL) 
   { 
     printf(" %d --> ", curnode->bin ); 
     curnode = curnode->ptr;  // re-assign current node to next node before the next loop iteration 
   } 
}