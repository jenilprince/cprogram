#include <stdio.h>
int main(){
    int n;
    printf("Enter stop: \n");
    scanf("%d",&n);
    int sum=0;
    for (int i=0;i<=n;i+=2){
        printf("%d\n",i);
        sum+=i;
    }
    printf("Sum: %d",sum);
}