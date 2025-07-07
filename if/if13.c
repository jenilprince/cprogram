#include <stdio.h>
int main(){
    int temp,choice,f,c;
    printf("Enter temperature: \n");
    scanf("%d",&temp);
    printf("1 if Celcius and 2 if Fahrenheit: ");
    scanf("%d",&choice);
    if (choice==1){
        f=(temp * 9/5) + 32;
        printf("%d",f);
    }
    else if (choice==2){
        c=(temp-32)*.56;
        printf("%d",c);
    }
    
    //(°F - 32) * 5/9. 
    
}