#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* link;
}list;
list *head, *top;

void push(int data);
void pop();
void display();

int main(){
    push(1);push(2);push(3);push(4);push(5);
    display();
    pop();pop();pop();
    display();

    return 0;
}

void push(int data){
    list* fnode;
    if(head==NULL){
        head=(list*)malloc(sizeof(list));
        head->data=data;
        head->link=NULL;
        top=head;
    }
    else{
        fnode=malloc(sizeof(list));
        fnode->data=data;
        fnode->link=NULL;
        top->link=fnode;
        top=fnode;
    }
}

void pop(){
    list* any=head;
    head=head->link;
    free(any);
}

void display(){
    list* temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->link;
    }
    printf("\n");
}