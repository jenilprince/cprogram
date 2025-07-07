#include<stdio.h>
int main(){
    int start=0,stop,sum=0;
    printf("Stop: ");
    scanf("%d",&stop);
    while(start<stop){
        start+=2;
        sum=sum+start;
        printf("%d\n",start);
    }
    printf("%d",sum);
}