#include <stdio.h>
int main(){
    int a=7,b=6,c=5;
    if (a>b){
        if (a>c){
            printf("%d is the greatest",a);

        }
        else{
            printf("%d is the greatest",c);
        }
    }
    else{
        if (b>c){
            printf("%d is the greatest",b);
        }
        else{
            printf("%d is the greatest",c);
        }
    }
}