#include<stdio.h>
int main(){
    int n,start=1,cub;
    printf("Enter stop: ");
    scanf("%d",&n);
    while (start<=n){
        cub=start*start*start;
        start+=1;
        if (cub<=n){
            printf("%d\n",cub);
    }
}
}