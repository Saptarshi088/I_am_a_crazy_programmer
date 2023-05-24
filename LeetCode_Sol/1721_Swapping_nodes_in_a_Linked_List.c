#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* link;
}list;
list *head;

void swap(int k);
void create(int n);
void display(list *h);

int main(int argc, char **argv){
    int n,k;
    scanf("%d",&n);
    create(n);
    display(head);
    printf("Enter the position of Kth NODE: ");
    scanf("%d",&k);
    swap(k);

    return 0;
}

void create(int n){
    list *fnode, *ptr;
    head=malloc(sizeof(list));
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

void display(list *h){
    list *temp=h;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}
void swap(int k){
    list *x=head, *y=head, *t=head;
    while(k>1){
        t=t->link;
        x=x->link;
        k--;
    }
    while(t->link){
        y=y->link;
        t=t->link;
    }
    int s=x->data;
    x->data=y->data;
    y->data=s;

    display(head);
}