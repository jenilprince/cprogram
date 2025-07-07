#include<stdio.h>
int main(){
    //fibonacci
    int n,a=0,b=1,c,count=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(count<=n){
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
        count+=1;
    }

}