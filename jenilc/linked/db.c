#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;    
};
struct Node *head=NULL;
void begin(int ndata){
    struct Node *newnode=malloc(sizeof(struct Node));
    newnode->data=ndata;
    newnode->next=head;
    newnode->prev=NULL;
    struct Node *temp=head;
    while(temp!=NULL){
        temp=temp->next;
    }
    head=newnode;
}
void end(int ndata){
    struct Node *newnode=malloc(sizeof(struct Node));
    newnode->data=ndata;
    newnode->next=NULL;
    if (head==NULL){
        newnode->prev=NULL;
        head=newnode;
        return;
    }
    struct Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
}
void delete(int value){
    struct Node *temp=head;
    while(temp!=NULL && temp->data!=value){
        temp=temp->next;
    }
    if (temp==NULL){
        printf("Not Found");
        return;
    }
    if (temp->prev!=NULL){
        temp->prev->next=temp->next;
    }
    else{
        head=temp->next;
    }
    if (temp->next!=NULL){
        temp->next->prev=temp->prev;
    }
    free(temp);
}
void display(){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
int main(){
    begin(20);
    begin(70);
    end(30);
    delete(30);
    delete(20);
    end(50);
    display();
}
