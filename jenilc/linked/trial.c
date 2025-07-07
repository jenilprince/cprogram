#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *Next;
};
int main(){
    struct Node *Node1=NULL;
    struct Node *Node2=NULL;
    struct Node *Node3=NULL;

    Node1=malloc(sizeof(struct Node));
    Node2=malloc(sizeof(struct Node));
    Node3=malloc(sizeof(struct Node));

    Node1->data=5;
    Node2->data=10;
    Node3->data=15;

    Node1->Next=Node2;
    Node2->Next=Node3;
    Node3->Next=Node1;
    struct Node *temp=Node1;
    do{
        printf("%d",temp->data);
        temp=temp->Next;
    }while (temp!=Node1);
    
}
