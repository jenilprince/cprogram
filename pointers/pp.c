#include<stdio.h>
int main(){
    int a=10;
    int *p=&a;
    int **pl=&p;
    printf("%d",**pl);
}