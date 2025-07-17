#include<stdio.h>
void calculate(int *a,int *b,int *sum, int *prod){
    *sum=*a+*b;
    *prod= (*a)*(*b);
}
void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
int main(){
    int a1=2,a2=7,sum,prod;
    calculate(&a1,&a2,&sum,&prod);
    printf("Sum: %d\nProduct: %d\n",sum,prod);
    int p=1,q=0;
    swap(&p,&q);
    printf("%d,%d",p,q);
}