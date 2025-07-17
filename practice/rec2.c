#include<stdio.h>
//To find sum of digits using recursion
int sumdig(int a){
    if (a==0){
        return 0;
    }
    else{
        return (a%10) + sumdig(a/10);
    }
}
int main(){
    int a=1124;
    int res=sumdig(a);
    printf("%d",res);
}