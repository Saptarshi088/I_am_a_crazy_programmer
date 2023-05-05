#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* link;
}list;
list *head;
void create(int n);
void display();

int main(){
	int n;
	printf("Enter he number of NODES: ");
	scanf("%d",&n);
	create(n);
	display();
	printf("\n");

	return 0;
}

void create(int n){
	list *fnode, *ptr;
	head=(list *)malloc(sizeof(list));
	printf("Enter data: ");
	scanf("%d",&head->data);
	head->link=NULL;
	ptr=head;
	for(int i=1;i<n;i++){
		fnode=malloc(sizeof(list));
		printf("Enter data: ");
		scanf("%d",&fnode->data);
		fnode->link=NULL;
		ptr->link=fnode;
		ptr=ptr->link;
	}
}

void display(){
	list * temp;
	temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->link;
	}
	
}
