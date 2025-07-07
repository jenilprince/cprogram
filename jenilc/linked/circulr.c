#include <stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
    
};
struct Node *head=NULL;
void insbeg(int newdata){
    struct Node *newnode=malloc(sizeof(struct Node));
    newnode->data=newdata;
    newnode->next=head;
    if(head==NULL){
        newnode->next=newnode;
        head=newnode;
        return;
    }
    struct Node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next = newnode;
    newnode->next=head;
    head=newnode;
}
void insend(int newdata){
    struct Node *newnode=malloc(sizeof(struct Node));
    newnode->data=newdata;
    newnode->next=head;
    if (head==NULL){
        newnode->next=newnode;
        head=newnode;
        return;
    }
    struct Node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
}
void delete(int value){
    struct Node *temp=head,*prev=NULL;
    if (head==NULL){
        printf("Empty. ");
    }
    //to remove head value//
    if (head->data==value){
        while(temp->next!=head){
            temp=temp->next;
        }
        if (temp==head){
            free(head);
            head->next=NULL;
            return;
        }
        else{
            temp->next=head->next;
            free(head);
            head=temp->next;
            return;
        }
    }
    prev=head;
    temp=head->next;
    while(temp!=head && temp->data!=value){
        prev=temp;
        temp=temp->next;
    }
    if (temp==head){
        printf("Value not found\n");
    }
    else{
        prev->next=temp->next;
        free(temp);
    }
}
void display(){
    struct Node *temp=head;
    do{
        printf("%d\n",temp->data);
        temp=temp->next;
    }while(temp!=head);
}
int main(){
    insbeg(5);
    insbeg(4);
    insbeg(3);
    insbeg(2);
    insbeg(1);
    insend(6);
    display();
}