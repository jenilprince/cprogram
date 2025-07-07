#include <stdio.h>
int main(){
    //largest among 2 nos.
    int a=2,b=4;
    if (a>b){
        printf("%d is greater than %d",a,b);
    }
    else if (a==b){
        printf("Same number");
    }
    else{
        printf("%d is greater than %d",b,a);
    }
}