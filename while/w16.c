#include<stdio.h>
int main(){
    int sum=0,a=15,n=a;
    while (n!=0){
        sum+=n%10;
        n/=10;
    }
    printf("%d\n",sum);
    if (a%sum==0){
        printf("Harshad");
    }
    else{
        printf("Not Harshad");
    }
}