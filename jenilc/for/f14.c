#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int prod=1;
    for (int i=1; i<=n;i++){
        prod*=i;
    }
    printf("Factorial: %d",prod);
}