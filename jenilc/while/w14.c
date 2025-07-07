#include<stdio.h>
int main(){
    //factorial calc
    int a,start=1,fact=1;
    printf("Enter number: \n");
    scanf("%d",&a);
    while(start<=a){
        fact=fact*start;
        start+=1;
    }
    printf("Fact: %d\n",fact);
}