#include <stdio.h>
#include <string.h>
struct Car
{
    int modelYear;
    char brand[60];

};
int main(){
    struct Car c1,c2;
    printf("%d,%s\n%d,%s",c1.modelYear=2020,strcpy(c1.brand,"Toyota"),c2.modelYear=2017,strcpy(c2.brand,"Audi"));
}