#include<stdio.h>
int main(){
    int a=1221,rev,last,n=a;
    while (n>0){
        last=n%10;
        rev=rev*10+last;
        n/=10;
    }
    printf("%d\n",rev);
    if (rev==a){
        printf("Palindrome");
    }
    else{
        printf("Not");
    }
}