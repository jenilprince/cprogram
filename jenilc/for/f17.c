#include<stdio.h>
int main(){
    int num=1124,sum=0,prod=1;
    for (int i=num;i>0;i=i/10){
        int last=i%10;
        sum+=last;
        prod*=last;
    }
    printf("Sum: %d\n",sum);
    printf("Product: %d\n",prod);
    if (sum==prod){
        printf("Spy");
    }
    else{
        printf("Not Spy");
    }
}