#include<stdio.h>
int main(){
    int start=1,stop=20000;
    for (int i=start;i<=stop;i++){
        int sum=0,prod=1;
        for (int j=i;j>0;j/=10){
            sum+=j%10;
            prod*=j%10;
        }
        if (sum==prod){
            printf("%d\n",i);
        }
    }
}    