#include<stdio.h>
int main(){
    
    int number=123,sum=0;
    for(int i=number;i>0;i=i/10){
        int last=i%10;
        sum=sum+last;
        
    }
    printf("%d",sum);
    if(number%sum==0){
        printf("harshad");
    }
}