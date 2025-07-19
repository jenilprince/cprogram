#include<stdio.h>
void table(int a){
    for (int i=1;i<11;i++){
        printf("%d * %d == %d\n",a,i,a*i);
    }
}
int main(){
    int num=5;
    table(num);
}