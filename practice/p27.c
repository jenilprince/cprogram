#include<stdio.h>
int main(){
    //Strong number check
    int num=145,last,temp=num,sum_fact=0;
    for (int j=temp;j>0;j/=10){
        last=j%10;
        int fact=1;
        for (int i=1;i<=last;i++){
            fact*=i;
        }
        sum_fact+=fact;
    }
    printf("%d",sum_fact);
}