#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("Enter: ");
    scanf("%d",&size);
    char *array = malloc(size*sizeof(char));
    for (int i=0;i<size;i++){
        scanf("%s",array[i]);
    }
    for (int i=0;i<size;i++){
        printf("%s",array[i]);
    }
}