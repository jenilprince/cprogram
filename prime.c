#include<stdio.h>
int main(){
    int num=12211,flag=1;
    for (int i=2;i<(num/2)+1;i++){
        if (num%i==0){
            flag=0;
            break;
        }
    }
    if (flag){
        printf("%d is Prime",num);
    }
    else{
        printf("%d is Not Prime",num);
    }
}