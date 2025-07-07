#include<stdio.h>
int main(){
    int stop,start=0;
    printf("Enter stop: ");
    scanf("%d",&stop);
    while(start<stop){
        start++;
        printf("%d\n",start);
    }
}