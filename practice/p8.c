#include<stdio.h>
int main(){
    int num=4353384,n=num,last;
    for (int i=n;i>0;i/=10){
        last=i%10;
    }
    printf("First: %d\n",last);
}