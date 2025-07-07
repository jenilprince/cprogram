#include <stdlib.h>
#include<stdio.h>
struct Node 
{
    int data;
    struct Node *next;
};
int main(){
    struct Node *Node1=NULL;
    struct Node *Node2=NULL;
    struct Node *Node3=NULL;
    Node1=malloc(sizeof(struct Node));
    Node2=malloc(sizeof(struct Node));
    Node3=malloc(sizeof(struct Node));
    Node1->data=2;
    Node2->data=3;
    Node3->data=4;
    Node1->next=Node2;
    Node2->next=Node3;
    Node3->next=Node1;
    struct Node *temp=Node1;
    do{
        printf("%d\n",temp->data);
        temp=temp->next;
    }while(temp!=Node1);
}