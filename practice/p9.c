#include<stdio.h>
int main(){
    int num=1234,last;
    while(num>0){
        last=num%10;
        num/=10;
    }
    printf("First: %d",last);
}