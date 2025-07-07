#include<stdio.h>
int main(){
    int number=13;
    if (number<1){
        printf("not possible");
    }
    else{
        int prime=0;
        int start=2;
        while (start<=number/2){
            if(number%start==0){
                prime=1;
                break;
            }
            start=start+1;
        }
        if (prime==0){
            printf("prime");
        }else{
            printf("not prime");
        }
        
    }
}