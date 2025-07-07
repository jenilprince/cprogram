#include<stdio.h>
int main(){
    int n1[5];
    for (int i=0;i<5;i++){
        printf("Enter number: ");
        scanf("%d",&n1[i]);
    }
    for (int i=0;i<5;i++){
        printf("%d\t",n1[i]);
    }
    
}

