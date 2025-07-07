#include <stdio.h>
int main(){
    int a=3,b=4,c=5;
    if (a<b){
        if (a<c){
            printf("%d is the smallest",a);

        }
        else{
            printf("%d is the smallest",c);
        }
    }
    else{
        if (b<c){
            printf("%d is the smallest",b);
        }
        else{
            printf("%d is the smallest",c);
        }
    }
}