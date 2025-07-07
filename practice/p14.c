#include<stdio.h>
void area(int radius){
    float area=3.14*radius*radius;
    printf("Area: %1.2f sq.units",area);
}
int main(){
    area(2);
}