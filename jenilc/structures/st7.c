#include<stdio.h>
#include<string.h>
struct Product
{
    int pid;
    char pname [339];
    int unitPrice;
    int quantity;
};
int main(){
    struct Product p1;
    printf("Enter ID: ");
    scanf("%d",&p1.pid);
    printf("Enter Name: ");
    scanf("%s",p1.pname);
    printf("Enter unit price: ");
    scanf("%d",&p1.unitPrice);
    printf("Enter quantity: ");
    scanf("%d",&p1.quantity);
    printf("%d,%s,%d,%d\nTotal: %d",p1.pid,p1.pname,p1.unitPrice,p1.quantity,(p1.unitPrice*p1.quantity));

}