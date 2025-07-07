#include<stdio.h>
int main(){
    //display Harshad number, num divisible by sumdig
    int start,stop;
    printf("Enter start number: ");
    scanf("%d",&start);
    printf("Enter stop number: ");
    scanf("%d",&stop);
    
    while (start<=stop){
        int last,n=start,sum=0;
        while (n>0){
            last=n%10;
            sum+=last;
            n/=10;        
        }
        if (start%sum==0){
            printf("%d\n",start);
        }
        start++; 
    } 
}