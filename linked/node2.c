#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *Next;
};
struct Node *head=NULL;
void insertBegin(int newdata){
    //size 
    struct Node *newnode = malloc(sizeof(struct Node));
    newnode->data=newdata;
    newnode->Next=head;
    head = newnode;
}
void insertEnd(int newdata){
    struct Node *newnode=malloc(sizeof(struct Node));
    newnode->data=newdata;
    newnode->Next=NULL;
    struct Node *temp=head;
    while(temp->Next!=NULL){
        temp=temp->Next;
    }
    temp->Next=newnode;
}
void display(){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->Next;
    }

}
void delet(int value){
    struct Node *temp=head;
    struct Node *prev=NULL;
    if(temp!=NULL && temp->data==value){
        head=temp->Next;
        free(temp);
        return;
    }
    while(temp!=NULL && temp->data!=value){
        prev=temp;
        temp=temp->Next;
    }
    prev->Next=temp->Next;
    free(temp);
}

int main(){
    insertBegin(90);
    insertBegin(50);
    insertBegin(30);
    insertEnd(10);
    insertEnd(20);
    delet(90);
    display();
}