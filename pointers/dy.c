#include<stdio.h>
#include<stdlib.h>
int main(){
int size;
printf("enter how much");
scanf("%d",&size);
int *array=malloc(size*sizeof(int));
for(int i=0;i<size;i++){
    scanf("%d",&array[i]);
}
for(int i=0;i<size;i++){
    printf("%d\t",array[i]);
}
}