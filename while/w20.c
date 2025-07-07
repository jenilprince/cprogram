#include <stdio.h>
#include<math.h>
int main(){
    //Armstrong check: eg. 153
    int num=10, powr=0,sum=0,last,b=num,c=num;
    while (b!=0){
        last=b%10;
        powr++;
        b/=10;
    }
    while (c!=0){
        last=c%10;
        sum+=pow(last,powr);
        c/=10;
    }
    printf("Power: %d\n",powr);
    printf("Sum of Digits: %d\n",sum);
    if (sum==num){
        printf("Armstrong\n");
    }else{
        printf("Not Armstrong\n");
    }
}