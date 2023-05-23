#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* link;
}stack;
stack *head;

void push(int data);
void pop();
void display();

int main(int argc, char **argv){
    push(1);push(2);push(3);push(4);push(5);
    display();
    pop();pop();pop();
    display();

    return 0;
}

void push(int data){
    stack *fnode;
    if(head==NULL){
        head=malloc(sizeof(stack));
        head->data=data;
        head->link=NULL;
    }
    else{
        fnode=malloc(sizeof(stack));
        fnode->data=data;
        fnode->link=head;
        head=fnode;
    }
}

void pop(){
    stack* ptr=head;
    head=head->link;
    free(ptr);
}

void display(){
    stack *temp=head;
    while(temp!=NULL){
        printf("|%d|\n",temp->data);
        temp=temp->link;
    }
    printf("\n\n");
}