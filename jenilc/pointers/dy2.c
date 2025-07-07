#include <stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    int *arr=malloc(size*sizeof(int));
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for (int i=0;i<size;i++){
        sum+=arr[i];
    }
    printf("Sum: %d",sum);
    free(arr);
      for (int i=0;i<size;i++){
        sum+=arr[i];
    }
}