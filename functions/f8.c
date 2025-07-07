#include <stdio.h>
void max(int a,int b,int c){
    if (a>b){
        if (a>c){
            printf("%d is greater",a);
        }
        else{
            printf("%d is greater",c);
        }
    }
    else{
        if (b>c){
            printf("%d is greater",b);
        }
        else{
            printf("%d is greater",c);
        }
    }
}
int main(){
    max(3,1,2);
}