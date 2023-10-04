#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int r;
	char sp;
	int n;
	struct node * next;
} node;


node * build_linked_link_from_input(){
	int f;
	scanf("%d",&f);
	int i=1; int j=1;
	int x;
	scanf("%d",&x);
	if (j%2==0){
		head->sp='*';
	}
	if (j%2==1){
		head->sp = '-';
	}
	head->n=x;
	head->r=i;
	head->next=NULL;
	node * curr = head;
	j++;
	int c=1;
	while(i-f<1){
		node * new = (node *)malloc(sizeof(node));
		int x;
		scanf("%d",&x);
		if (j%2==0){
			new->sp='*';
		}
		if (j%2==1){
			new->sp = '-';
		}
		if (x==-1){
			new->sp='$';
		}
		new->n=x;
		new->r=i;
		new->next=NULL;
		curr->next=new;
		curr=curr->next;
		j++;
		if (c){
			head->next=new;
			c--;
		}
		if (x==-1){
			i++;
			j=1;
		}
	}
	return head;
}

void display(){
	node * ptr = head;
	while (ptr!=NULL){
		if (ptr->sp=='$'){
		    printf("%d ", -1);
			printf("\n");
			ptr=ptr->next;
			continue;
		}
		printf("%d ", ptr->n);
		ptr=ptr->next;
	}
	return;
}

void decode_image(node * head){
	node * ptr = head;
	while (ptr!=NULL){
		if (ptr->sp=='$'){
			printf("\n");
			ptr=ptr->next;
			continue;
		}
		for(int k=0; k<(ptr->n); k++){
			printf("%c",ptr->sp);
		}
		ptr=ptr->next;
	}
	return;
}

int main(){
	head=(node *)malloc(sizeof(node));
	build_linked_link_from_input();
	display();
	decode_image(head);
	return 0;
}