#include<stdio.h>
#include <math.h>
int main(){
    //check armstrong eg. 153
    int powr=0,num=9474,n=num;
    for (int i=n; i>0; i/=10){
        powr+=1;
    }
    printf("%d\n",powr);
    int sum=0;
    for (int i=num;i>0;i/=10){
        sum += pow(i%10,powr);
    }
    printf("Sum: %d\n",sum);
}