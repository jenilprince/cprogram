#include <stdio.h>
#include <stdlib.h>
int main(){
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    int *arr=malloc(size*sizeof(int));
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max=*arr;
    for (int i=0;i<size;i++){
        if (*(arr+i)>max){
            max=*(arr+i);
            
        }
    } printf("Max: %d",max);
}

