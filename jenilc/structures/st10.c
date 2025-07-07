#include <stdio.h>
int main(){
    //pointer to pointer
    int a=102;
    int *pointr1=&a;
    int **pc=&pointr1;
    printf("%d",**pc);
} 