#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int n=num,count=0,last;
    for (int i=n;i>0;i/=10){
        last=i%10;
        count++;
    }
    printf("Count: %d",count);
}