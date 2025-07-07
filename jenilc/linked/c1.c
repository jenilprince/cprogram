#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
int main(){
    struct Node *Node1=NULL;
    struct Node *Node2=NULL;
    struct Node *Node3=NULL;
    Node1=malloc(sizeof(struct Node));
    Node2=malloc(sizeof(struct Node));
    Node3=malloc(sizeof(struct Node));
    Node1->data=1;  
    Node2->data=2;  
    Node3->data=3;  
    Node1->next=Node2;
    Node2->next=Node3;
    Node1->prev=NULL;
    Node3->next=NULL;
    Node3->prev=Node2;
    Node2->prev=Node1;
    struct Node *temp=Node3;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->prev;
    }
}