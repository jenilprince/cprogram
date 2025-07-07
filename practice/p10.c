#include<stdio.h>
int main(){
    int num = 246802,check=0,last;
    for (int i=num;i>0;i/=10){
        last=i%10;
        if (last==2||last==4||last==6||last==8||last==0){
            check=1;
        }else{
            check=0;
            break;
        }}
        if (check==1){
            printf("Yes");
        }
        else{
            printf("No");
        }

}