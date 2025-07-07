#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main(){
    struct Node *node1=NULL;
    struct Node *node2=NULL;
    struct Node *node3=NULL;
    node1=malloc(sizeof(struct Node));
    node2=malloc(sizeof(struct Node));
    node3=malloc(sizeof(struct Node));
    node1->data=1;
    node2->data=2;
    node3->data=3;
    node1->next=node2;
    node2->next=node3;
    node3->next=NULL;
    struct Node *temp=node1;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
