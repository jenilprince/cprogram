#include<stdio.h>
int main(){
    int a=12,n=a,i=1;
    while (n>=i){
        if (n%i==0){
            printf("%d\n",i);
        }
        i++;
    }
}