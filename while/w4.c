#include<stdio.h>
int main(){
    int start=1,stop,sum=0;
    printf("Enter stop number: ");
    scanf("%d",&stop);
    while(start<=stop){
        sum+=start;
        start++;
    }
    printf("%d\n",sum);
}