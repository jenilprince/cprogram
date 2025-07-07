#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head=NULL;
void insbeg(int newdata){
    struct Node *newnode=malloc(sizeof(struct Node));
    newnode->data=newdata;
    newnode->next=head;
    newnode->prev=NULL;
    head=newnode;
}
void insend(int newdata){
    struct Node *newnode=malloc(sizeof(struct Node));
    newnode->data=newdata;
    newnode->next=NULL;
    struct Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=NULL;
}
void delete(int value){
    struct Node *temp=head;
    if (temp==NULL){
        printf("Empty.");
        return;
    }
    while(temp!=NULL && temp->data!=value){
        temp=temp->next;
    }
    if (temp->next!=NULL){
        temp->next->prev=temp->prev;
    }
    if (temp->prev!=NULL){
        temp->prev->next=temp->next;
    }
    else{
        head=temp->next;
    }
    free (temp);

}
void display(){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
int main(){
    insbeg(50);
    insbeg(70);
    insend(40);
    insend(10);
    delete(70);
    display();
}