#include<stdio.h>
int main(){
    //sum of AP
    int a=0,d=3,l=30,sum=0;
    for (int i=0;i<=l;i+=d){
        printf("%d\n",i);
        sum+=i;
    }
    printf("Sum: %d",sum);
}