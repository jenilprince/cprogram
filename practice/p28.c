#include<stdio.h>
int main(){
    int arr;
    int *p=arr;
    for (int i=0;i<5;i++){
        printf("Enter: ");
        scanf("%d",&p);
    }
    for (int i=0;i<5;i++){
        printf("%d",*(p+i));
    }
}