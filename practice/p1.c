#include <stdio.h>
int main (){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int n=num,last;
    for (int i=n;i>0;i=i/10){
        last=i%10;
        printf("%d",last);
    }
}