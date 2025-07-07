#include<stdio.h>
int main(){
    //primes in interval
    int start,stop;
    printf("Enter start number: ");
    scanf("%d",&start);
    printf("Enter stop number: ");
    scanf("%d",&stop);
    // check if start is prime
    while (start<=stop){
        int prime=0;
        int i=2;
        while(i<(start/2)+1){
            if (start%i==0){
               prime=1;
            }
            i++;
        }
        if (prime==0){
            printf("%d\n",start);
        }
        
        start++;
    }

}