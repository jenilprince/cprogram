#include <stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("Enter: ");
    scanf("%d",&size);
    int *array=malloc(size*sizeof(int));
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    int max=array[0];
    for (int i=0;i<size;i++){
        if (array[i]>max){
            max=array[i];
        }
    }printf("Max: %d",max);
}