#include<stdio.h>
#include<string.h>
struct Laptop
{
    int lid;
    char brand[23];
    float price;
};
int main(){
    struct Laptop l1[2];
    for (int i=0;i<2;i++){
        printf("Enter ID: ");
        scanf("%d",&l1[i].lid);
        printf("Enter Title: ");
        scanf("%s",l1[i].brand);
        printf("Enter price: ");
        scanf("%f",&l1[i].price);
    }
    for (int i=0;i<2;i++){
        printf("%d, %s, %1.2f",l1[i].lid,l1[i].brand,l1[i].price);
        printf("\n");
    }
}