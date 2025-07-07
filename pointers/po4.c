#include<stdio.h>
void ar(int *n1,int *n2,int *sum,int *prod){
    *sum=*n1+*n2;
    *prod=(*n1)*(*n2);
}
int main(){
    int n1=2,n2=5,sum,prod;
    sum=n1+n2;
    prod=n1*n2;
    ar(&n1,&n2,&sum,&prod);
    printf("%d,%d\nSum: %d\nProduct: %d",n1,n2,sum,prod);
}