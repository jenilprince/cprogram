#include<stdio.h>
int main(){
    //Sum of even digits
    int num=24813,last,temp=num,sum_even;
    for (int i=temp;i>0;i/=10){
        last=i%10;
        if (last%2==0){
            sum_even+=last;
        }
    }
    printf("%d\n",sum_even);
}