#include <stdio.h>
int main(){
    int n;
    printf("Enter stop: \n");
    scanf("%d",&n);
    int sum=0;
    for(int i;i<=n;i++){
        sum+=i;
    }
    printf("%d\n",sum);
}