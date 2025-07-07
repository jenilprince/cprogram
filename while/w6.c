#include<stdio.h>
int main(){
    int start=1,stop,sum=0;
    printf("Enter stop: ");
    scanf("%d",&stop);
    while(start<stop){
        start+=2;
        sum+=start;
        printf("%d\n",start);
    }
    printf("%d",sum);
}