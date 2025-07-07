#include<stdio.h>
int main(){
    int a=1124,sum=0,pro=1,n=a;
    while(n!=0){
        sum+=n%10;
        pro*=n%10;
        n/=10;
    }
    printf("Sum: %d\n",sum);
    printf("Product: %d\n",pro);
    if (sum==pro){
        printf("Spy");
    }
    else{
        printf("Not spy");
    }
}