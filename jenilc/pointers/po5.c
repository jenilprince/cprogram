#include <stdio.h>
int main(){
    int a=12;
    int *point=&a;
    *point+1;
    printf("%d",point);
}