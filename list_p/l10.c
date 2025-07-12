#include<stdio.h>
int main(){
    int num=1234;
    int last,temp=num;
    for (int i=temp;i>0;i/=10){
        last=i%10;

    }printf("First digit: %d\n",last);
}