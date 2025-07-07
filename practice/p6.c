#include<stdio.h>
int main(){
    int start=1,end=100;
    for (int i=start;i<end;i++){
        if (i%15==0){
            printf("%d\n",i);
        }
    }
}