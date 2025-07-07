#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head=NULL;
void begin (int d){
    struct Node *newnode=malloc(sizeof(struct Node));
    newnode->data=d;
    newnode->next=head;
    newnode->prev=NULL;
    struct Node *temp=head;
    while(temp!=NULL){
        temp=temp->next;
    }
    head = newnode;
}
void end(int new){
    struct Node *newnode=malloc(sizeof(struct Node));
    newnode->data=new;
    newnode->next=NULL;
    if (head==NULL){
        newnode->prev=NULL; 
        return;
    }
    head=newnode;
    struct Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    
}
void display(){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
int main(){
    begin(5);
    end(6);
    display();
}