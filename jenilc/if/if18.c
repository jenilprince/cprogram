#include <stdio.h>
int main(){
    int units,amt;
    printf("Enter units: ");
    scanf("%d",&units);
    if (units<=50){
        amt=units*0.5;
        printf("Bill: %d",amt);
    }
    else if(units<=150 && units>50){
        amt=50*0.5+(units-50)*0.75;
        printf("Bill: %d",amt);
    }
    else if (units<=250 && units>150){
        amt=50*0.5+100*0.75+(units-150)*1.2;
        printf("Bill: %d",amt);
    }
    else if (units>250){
        amt=50*0.5+100*0.75+100*1.2+(units-250)*1.5;
        printf("Bill: %d",amt);
    }
}