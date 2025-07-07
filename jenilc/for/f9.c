#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter stop: \n");
    scanf("%d",&n);
    int sq,sum=0;
    for (int i; i<=n;i++){
        sq=pow(i,2);
        printf("%d\n",sq);
        sum+=sq;
    }
    printf("Sum: %d",sum);
    
}