#include<stdio.h>
int main(){
    //check prime number
    int num=977;
    for (int i=2;i<=(num/2)+1;i++){
        if (num%i==0){
            printf("%d is Not Prime\n",num);
            break;
        }
        else{
            printf("%d is Prime\n",num);
            break;
        }

    }
}
