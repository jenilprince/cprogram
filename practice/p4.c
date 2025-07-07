#include<stdio.h>
int main()
{
    int start=1,end; 
    printf("Enter end: ");
    scanf("%d",&end);
    for (int i=start;i<end;i++){
        int prime=1;
        for (int j=2;j<((i/2)+1);j++){
            if (i%j==0){
                prime=0;
            }
        }
            if (prime==1){
                printf("%d\n",i);
            }
    }
}