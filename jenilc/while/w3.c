#include<stdio.h>
int main(){
    int sum=0,start=1;
    while(start<=10){
        sum+=start;
        start+=1;
    }    
    printf("%d\n",sum);
}