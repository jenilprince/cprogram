#include <stdio.h>
int main(){
    //smallest among 2 nos.
    int a=2,b=4;
    if (a>b){
        printf("%d is smaller than %d",b,a);
    }
    else if (a==b){
        printf("Same number");
    }
    else{
        printf("%d is smaller than %d",a,b);
    }
}