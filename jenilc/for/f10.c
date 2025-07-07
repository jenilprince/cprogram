#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter stop: \n");
    scanf("%d",&n);
    int cube;
    for (int i=1;i<=n;i++){
        cube=pow(i,3);
        if (cube<=n){
            printf("%d\n",cube);
        }
    }
}