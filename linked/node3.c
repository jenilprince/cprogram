#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void insertBegin(int new){
    struct Node *newnode=malloc(sizeof(newnode));
    newnode->data=new;
    newnode->next=head;
    head=newnode;
}
void insertEnd(int new){
    struct Node *newnode=malloc(sizeof(struct Node));
    newnode->data=new;
    newnode->next=NULL;
    struct Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;

}
void display(){
    int coun=0;
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        coun++;
        temp=temp->next;
    }
    printf("Count: %d",coun);
}
void count(){
    struct Node *temp=head;
    int coun=0;
    while(temp!=NULL){
        coun++;
        temp=temp->next;
    }printf("Count: %d",coun);
}
int main(){
    int count,data;
    printf("Enter count: ");
    scanf("%d",&count);
    for (int i=0;i<count;i++){
        printf("Enter data: ");
        scanf("%d",&data);
        insertBegin(data);
    }
    int end;
    printf("Enter data to add at end: ");
    scanf("%d",&end);
    insertEnd(end);
  
    
    display();
}