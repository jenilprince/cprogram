#include<stdio.h>
int main(){
    char manual[6]={'H','E','L','L','O','\0'}   ;
    for (int i=0;i<5;i++){
        printf("%c",manual[i]);
    }
}