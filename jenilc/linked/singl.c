#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *Next;
};
struct Node *head=NULL;
void insertBegin(int ndata){
    struct Node *newnode=malloc(sizeof(struct Node));
    newnode->data=ndata;
    newnode->Next=head;
    head=newnode;
}
void display(){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->Next;
    }
}


int main(){
int count,data;
printf("eneter how manyu daata");
scanf("%d",&count);
for (int i = 0; i < count; i++)
{
    printf("enter data");
    scanf("%d",&data);
    insertBegin(data);

}

display();
}