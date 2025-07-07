#include<stdio.h>
int main(){
    int n;
    printf("Enter number: \n");
    scanf("%d",&n);
    for (int j=1;j<=n;j++){
        for (int i=1;i<=10;i++){
            printf("%d * %d == %d\n",j,i,j*i);
        }
    }
}