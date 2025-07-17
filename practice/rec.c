#include<stdio.h>
int  Factorial(int num){
    if (num==0){
        return 1;
    }
    else{
        return num  *  Factorial(num-1);
    }
}
int sum_upto(int n){
    if (n==0){
        return 0;
    }
    else{
        return n + sum_upto(n-1);
    }
}
int main(){
    int a=0;
    int result=Factorial(a);
    printf("%d\n",result);
    int res=sum_upto(a);
    printf("%d\n",res);
}