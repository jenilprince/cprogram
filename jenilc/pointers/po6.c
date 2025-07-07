#include <stdio.h>
int main(){
    int arr[5];
    int *p=arr;
    for (int i=0;i<5;i++){
        printf("Enter: ");
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<5;i++){
        printf("%d\n",*(p+i));
    }
}