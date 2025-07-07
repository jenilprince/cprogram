#include<stdio.h>
int main(){
    //mult table
    int start=1,stop;
    printf("Enter number: ");
    scanf("%d",&stop);
    while(start<=10){
        printf("%d * %d == %d\n", start,stop,start*stop);
        start+=1;
    }
}