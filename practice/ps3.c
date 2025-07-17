#include<stdio.h>
int main() {
    int arr[5]={1,2,3,4,5};
    int *pointer=arr;
    for (int i=0;i<5;i++){
        printf("%d",*(pointer+i));
    }
    printf("\n");
    int a=5;
    int *p=&a;
    int **p1=&p;
    a++;
    ++a;
    printf("%d",++a);
}
