#include<stdio.h>
int main(){
    int number,sum=0;
    int start=1;
    while (start<=10)
    {
        printf("Enter 10 numbers: ");
        scanf("%d",&number);
        start+=1;
        sum=sum+number;
        
    }
    printf("%d\n",sum);
    printf("Avg: %d\n",sum/10);

}