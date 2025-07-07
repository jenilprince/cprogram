#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int copy[5];
    for (int i=0;i<5;i++){
        printf("\n");
        printf("%d\t",arr[i]);
        copy[i]=arr[i];
        printf("%d\t",copy[i]);
    }
}