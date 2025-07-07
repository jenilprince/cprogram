#include <stdio.h>
int main(){
    int basic,b;
    printf("Enter basic salary: ");
    scanf("%d",&basic);
    if (basic<=10000){
        b=basic+basic*(0.2+0.8);
        printf("Gross salary: %d",b);
    }
    else if(basic>10000 && basic < 20001){
        b=basic+basic*(0.25+0.9);
        printf("Gross salary: %d",b);
    }
    else if(basic>20001){
        b=basic+basic*(0.3+0.95);
        printf("Gross salary: %d",b);
    }
}