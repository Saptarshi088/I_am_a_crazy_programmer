#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}node;
node *head;

void create(int n);
void display();

int main(){
    int n;cin>>n;
    create(n);
    display();
    // node *head, *any;
    // head=(node*)malloc(sizeof(node));
    // head->data=100;
    // head->next=NULL;
    // // cout<<head->data<<endl;
    // any=(node *)malloc(sizeof(node));
    // any->data=200;
    // any->next=NULL;
    // head->next=any;
    // while(head){
    //     cout<<head->data<<" ";
    //     head=head->next;
    // }
    // cout<<endl;

    return 0;
}

void create(int n){
    node *fnode, *any;
    head=(node*)malloc(sizeof(node));
    cin>>head->data;
    head->next=NULL;
    any=head;
    for(int i=1;i<n;i++){
        fnode=(node*)malloc(sizeof(node));
        cin>>fnode->data;
        fnode->next=NULL;
        any->next=fnode;
        any=any->next;
    }
}

void display(){
    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
