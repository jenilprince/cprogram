#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    printf("Enter size: ");
    scanf("%d",&num);
    int *array=malloc(num*sizeof(int));
    for (int i=0;i<num;i++){
        scanf("%d",&array[i]);
    }
    for (int i=0;i<num;i++){
        printf("%d\t",array[i]);
    }
}
