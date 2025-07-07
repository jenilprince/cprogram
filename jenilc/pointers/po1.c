#include <stdio.h>
int main(){
    int a[4]={1,2,3,4};
    int *p=a;
    p++;
    printf("%d",*p);
    float var[1]={2.34};
    float *po=var;
    printf("%d",*po);
}