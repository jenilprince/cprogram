#include<stdio.h>
void sum(int a){
    int sum=0;
    for (int i=1;i<=a;i++){
        sum+=i;
    }
    printf("Sum: %d",sum);
}
int main(){
    int num=10;
    sum(num);
}