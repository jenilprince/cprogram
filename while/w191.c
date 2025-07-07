#include<stdio.h>
int main(){
    int num=5;
    
    if (num<1){
        printf("Invalid");
    }
    else{
        int is_prime=0;//flag
        int start=2;
        while(start<=num/2){
            if (num%start==0){
                is_prime=1;
                break;
            }
            start+=1;
            
        }
        if (is_prime==0){
            printf("Prime");
        }else{
            printf("Not Prime");
        }
        
    }
    
}