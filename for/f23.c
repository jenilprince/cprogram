#include<stdio.h>
int main(){
    int start=1,stop=20;
    for (int i=start;i<=stop;i++){
        int sum=0;
        for (int j=i;j>0;j/=10){
            sum+=j%10;
        }
        if (i%sum==0){
            printf("%d\n",i);
        }
    }
}