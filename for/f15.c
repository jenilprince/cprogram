#include<stdio.h>
int main(){
    int a=0,b=1,n=10,c;
    for (int i=1; i<=n;i++){
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
}