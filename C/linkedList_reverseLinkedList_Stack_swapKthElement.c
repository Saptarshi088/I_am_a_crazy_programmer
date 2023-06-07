#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node *link;
} list;
list *head;

void create(int n);
void display();
void reverse();
void push(int data);
void pop();
void swap(int k);

int main()
{
	int n;
	printf("Enter he number of NODES: ");
	scanf("%d", &n);
	create(n);
	// display();
	// printf("\n");
	reverse();
	// display();
	push(6);
	push(7);
	push(8);
	push(9);
	push(10);
	// display();
	// pop();
	// pop();
	// pop();
	// display();
	swap(2);

	display();

	return 0;
}

void create(int n)
{
	list *fnode, *ptr;
	head = (list *)malloc(sizeof(list));
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
	list *prev = NULL, *next = NULL, *current = head;
	while (current != NULL)
	{
		next = current->link;

		current->link = prev;

		prev = current;
		current = next;
	}
	head = prev;
}

void push(int data)
{
	list *new_node = malloc(sizeof(list));
	new_node->data = data;
	new_node->link = head;
	head = new_node;
}

void pop()
{
	list *temp = head;
	head = head->link;
	free(temp);
}

void swap(int k)
{
	list *x = head, *y = head, *z = head;
	int var;
	while (k--)
	{
		x = x->link;
		z = z->link;
	}
	while (z->link)
	{
		y = y->link;
		z = z->link;
	}

	var = x->data;
	x->data = y->data;
	y->data = var;
}

void display()
{
	list *temp;
	temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->link;
	}
	printf("\n\n");
}