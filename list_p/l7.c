#include<stdio.h>
int main(){
    int list[6]={3,1,2,3,4,3};
    for (int i=0;i<6;i++){
        if (list[i]!=3){
            printf("%d\n",list[i]);
        }
    }
}