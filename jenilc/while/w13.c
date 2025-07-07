#include<stdio.h>
int main(){
    int a=100,b=200,sum=0,count=0;
    while (a<=b){
        if (a%9==0){
            printf("%d\n",a);
        }
        a+=1;
        sum+=a;
        count++;

    }
    printf("%d\n",sum);
    printf("%d\n",sum/count);
    
}