#include<stdio.h>
int main(){
    int num=12321,rev=0,last;
    for (int i=num;i>0;i/=10){
        last=i%10;
        rev=rev*10+last;
    }
    if (rev==num){
    printf("%d is a Palindrome",num);
    }
    else{   
        printf("%d is not a Palindrome", num);
    }
}