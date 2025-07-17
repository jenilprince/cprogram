#include<stdio.h>
void calculate(int *a,int *b,int *sum, int *prod){
    *sum=*a+*b;
    *prod= (*a)*(*b);
}
int main(){
    int a1=2,a2=7,sum,prod;
    calculate(&a1,&a2,&sum,&prod);
    printf("Sum: %d\nProduct: %d",sum,prod);
}