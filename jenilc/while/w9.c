#include<stdio.h>
int main(){
    int start=1,stop,sum=0,sq;
    printf("Enter stop: ");
    scanf("%d",&stop);
    while(start<=stop){
        sq=start*start;
        sum+=sq;
        start+=1;
        printf("%d\n",sq);
    }
    printf("%d",sum);
}