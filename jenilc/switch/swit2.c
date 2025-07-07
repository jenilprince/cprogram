#include <stdio.h>
int main(){
    int temp,choice,f,c;
    printf("Enter temp: ");
    scanf("%d",&temp);
    printf("1 if C and 2 if F: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            f=(temp * 9/5) + 32;
            printf("%d",f);
            break;
        case 2:
            c=(temp-32)*.56;
            printf("%d",c);
            break;
    }
}