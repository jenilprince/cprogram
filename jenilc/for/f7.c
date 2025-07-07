#include <stdio.h>
int main(){
    int sum=0;
    for (int i;i<=10;i++){
        printf("Enter 10 numbers: ");
        scanf("%d",&i);
        sum+=i;
    }
    printf("Sum: %d",sum);
}