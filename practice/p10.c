#include<stdio.h>
int main(){
    int num = 27219,check,last;
    for (int i=num;i>0;i/=10){
        last=num%10;
        if (last!=2||last!=4||last!=6||last!=8||last==0){
            printf("No");
        }
    }
}