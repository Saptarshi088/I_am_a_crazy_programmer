#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} list;
list *head;

void create(int n);
void reverse();
void display();
void push();
void pop();

int main()
{
    int n;
    printf("Enter the number of NODES: ");
    scanf("%d", &n);
    create(n);
    // display();
    printf("\n");
    reverse();
    display();
    printf("\n");
    push();push();push();push();push();
    display();
    pop();pop();pop();
    printf("\nafter pop Operation\n");
    display();


    return 0;
}

void create(int n)
{
    list *fnode, *ptr;
    head = malloc(sizeof(list));
    printf("Enter data: ");
    scanf("%d", &head->data);
    head->link = NULL;
    ptr = head;
    for (int i = 1; i < n; i++)
    {
        fnode = malloc(sizeof(list));
        printf("Enter data: ");
        scanf("%d", &fnode->data);
        fnode->link = NULL;
        ptr->link = fnode;
        ptr = ptr->link;
    }
}

void reverse()
{
	list * prev=NULL,*curent=head,*next;
    	while(curent!=NULL){
		next=curent->link;
		curent->link=prev;

		prev=curent;
		curent=next;
	}
	head=prev;
}

void display()
{
    list *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

void push(){
    list* any;
    any=malloc(sizeof(list));
    printf("Enter data to push: ");
    scanf("%d",&any->data);
    any->link=head;
    head=any;
}

void pop(){
    head=head->link;
    printf("\ndata popped");
}

