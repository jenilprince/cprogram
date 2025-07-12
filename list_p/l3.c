#include<stdio.h>
int main(){
    //Split list into two halves
    int list[6]={1,2,3,4,5,6};
    for (int i=0;i<3;i++){
        printf("%d",list[i]);
    }
    printf("\n");
    for (int i=3;i<6;i++){
        printf("%d",list[i]);
    }
}