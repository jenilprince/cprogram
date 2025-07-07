#include<stdio.h>
int main(){
    int a,d,start=1,num,sum=0;
    printf("Enter start number of AP: ");
    scanf("%d",&a);
    printf("Enter common difference of AP: ");
    scanf("%d",&d);
    printf("Enter no. of terms of AP: ");
    scanf("%d",&num);
    while (start<=num){
        a=a+d;
        sum+=a;
        start+=1;
    }   
    printf("%d",sum);
    
}