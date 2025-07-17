#include<stdio.h>
int main(){
    int start=12;
    int end=200;
    for (int i=start;i<=end;i++){
        int flag=1;
        int n=i;
        for (int j=2;j<=n/2;j++){
            if (n%j==0){
                flag=0;
                break;
            }
        }if (flag){
            printf("%d\n",i);
        }
    }
}
