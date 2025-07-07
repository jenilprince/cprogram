#include<stdio.h>
int main(){
    //display spy number eg. 1124
    int start,stop;
    printf("Enter start number: ");
    scanf("%d",&start);
    printf("Enter stop number: ");
    scanf("%d",&stop);
    while(start<=stop){
        int sum=0,prod=1,last,n=start;
        while (n>0){
            last=n%10;
            sum+=last;
            prod*=last;
            n/=10;
        }
        if (sum==prod){
            printf("%d\n",start);
        }
        start++;
    }   

}