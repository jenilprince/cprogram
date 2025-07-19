#include<stdio.h>
void add(int a,int b){
    int sum=a+b;
    printf("%d\n",sum);
}
void sub(int a,int b){
    int dif=a-b;
    printf("%d\n",dif);
}
void mul(int a,int b){
    int pro=a*b;
    printf("%d\n",pro);
}
void div(int a,int b){
    int qu=a/b;
    printf("%d\n",qu);
}
int main(){
    int a=10,b=34;
    add(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);
}