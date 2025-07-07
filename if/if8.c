#include <stdio.h>
int main(){
    int a=4;
    if (a==1||a==3||a==5||a==7||a==8||a==10||a==12){
        printf("31 days");
    }
    else if (a==2){
        printf("28 days");

    }
    else if (a>12){
        printf("Not possible");
    }
    else{
        printf("30 days");
    }
}