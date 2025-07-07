#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node *Next;
};
struct Node *head = NULL;
void atBegin(int newdata){
    struct Node *newnode=malloc(sizeof(struct Node));
    newnode->data=newdata;
    newnode->Next=head;
    head=newnode;
}
void atend(int newdata){
    struct Node *newnode=malloc(sizeof(struct Node));
    newnode->data=newdata;
    newnode->Next=NULL;
    struct Node *temp=head;
    while (temp->Next!=NULL){
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
int main(){
    atBegin(50);
    atBegin(60);
    atBegin(70);
    atend(50);
    atend(60);
    atend(70);
    display();
}